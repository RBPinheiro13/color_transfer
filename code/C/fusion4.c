//Code to calculate Fusion in C
#include <mex.h>
#include <stdio.h>
#include <math.h>
#include <float.h>

//-----------------------------------------------------------------------------
// Fonctions to calculate the Inverse -----------------------------------------
//-----------------------------------------------------------------------------
void calc_minor(double b[5][5],double a[5][5],int i,int n) {
    int j,l,h=0,k=0;
    for(l=1;l<n;l++)
        for( j=0;j<n;j++){
            if(j == i)
                continue;
            b[h][k] = a[l][j];
            k++;
            if(k == (n-1)){
                h++;
                k=0;
            }
        }
}// end function

//---------------------------------------------------
//	calculate determinte of matrix
double det(double a[5][5],int n){
    int i;
    double b[5][5],sum=0;
    if (n == 1)
        return a[0][0];
    else if(n == 2)
        return (a[0][0]*a[1][1]-a[0][1]*a[1][0]);
    else
        for(i=0;i<n;i++){
            calc_minor(b,a,i,n);	// read function
            sum = (double) (sum+a[0][i]*pow(-1,i)*det(b,(n-1)));	// read function	// sum = determinte matrix
        }
    return sum;
}// end function

//---------------------------------------------------
//	calculate transpose of matrix
void transpose(double c[5][5],double d[5][5],double n,double det){
    int i,j;
    double b[5][5];
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            b[i][j] = c[j][i];
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            d[i][j] = b[i][j]/det;	// array d[][] = inverse matrix
}// end function

//---------------------------------------------------
//	calculate cofactor of matrix
void cofactor(double a[5][5],double d[5][5],double n,double determinte){
    double b[5][5],c[5][5];
    int l,h,m,k,i,j;
    for (h=0;h<n;h++)
        for (l=0;l<n;l++){
            m=0;
            k=0;
            for (i=0;i<n;i++)
                for (j=0;j<n;j++)
                    if (i != h && j != l){
                        b[m][k]=a[i][j];
                        if (k<(n-2))
                            k++;
                        else{
                            k=0;
                            m++;
                        }
                    }
            c[h][l] = pow(-1,(h+l))*det(b,(n-1));	// c = cofactor Matrix
        }
    transpose(c,d,n,determinte);	// read function
}// end function

//---------------------------------------------------
//	calculate inverse of matrix
void inverse(double a[5][5],double d[5][5],int n,double det){
    if(det == 0)
        printf("\nInverse of Entered Matrix is not possible\n");
    else if(n == 1)
        d[0][0] = 1;
    else
        cofactor(a,d,n,det);	// read function
}
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

void mexFunction(int nlhs, mxArray *plhs[],
        int nrhs, const mxArray *prhs[])
{
    int width;
    int height;
    int sz;
    int i, j, ii, index;
    int x, y;
    int numelements;
    double* rin; double* gin; double* bin;
    const mwSize* dims;//int* dims;

    //Inputs of the function, all doubles!!!
    double* img_target;
    double* labels_target;
    double num_labels;
    double* count;
    double* R_t;
    double* G_t;
    double* B_t;
    double r_2;
    double par_c;
    double par_s;

    if (nrhs < 10) {
        mexErrMsgTxt("At least ten arguments are required.") ;
    } else if(nrhs > 10) {
        mexErrMsgTxt("Too many input arguments.");
    }
    if(nlhs!=3) {
        mexErrMsgIdAndTxt("SLIC:nlhs","Three outputs required, the fusion image, the mean of SP and the Q_inv Matrix");
    }
    //---------------------------
    // Number of elements in the image;
    numelements   = mxGetNumberOfElements(prhs[0]) ;
    // Dimensions of the image, expected [:inf :inf 3];
    dims  = mxGetDimensions(prhs[0]) ;
    // Get the data from the image
    img_target  = (double*)mxGetData(prhs[0]) ;//mxGetData returns a void pointer, so cast it
    width = dims[1]; height = dims[0];//Note: first dimension provided is height and second is width dims[2] = 3 RGB;
    sz = width*height; //Size of the image;
    //---------------------------
    labels_target  = (double*)mxGetData(prhs[1]);//Get data from the labels
    num_labels     = mxGetScalar(prhs[2]); //Get number of superpixels
    count          = (double*)mxGetData(prhs[3]); //Get number of pixels in each superpixel
    R_t            = (double*)mxGetData(prhs[4]); //Get the vector with the colours for the Red Channel
    G_t            = (double*)mxGetData(prhs[5]); //Get the vector with the colours for the Green Channel
    B_t            = (double*)mxGetData(prhs[6]); //Get the vector with the colours for the Blue Channel
    r_2            = mxGetScalar(prhs[7]); // Parameteres to calculate the fusion
    par_c          = mxGetScalar(prhs[8]); // Parameteres to calculate the fusion
    par_s          = mxGetScalar(prhs[9]); // Parameteres to calculate the fusion


    //---------------------------
    // Allocate memory
    //---------------------------

    double* Q_inv[5][5];

    for (i=0; i<5;i++) {
        for (j=0;j<5;j++) {
            Q_inv[i][j] = mxMalloc(sizeof(double)*num_labels);
        }
    }

    double* A_mean[5];

    for (i=0;i<5;i++) {
        A_mean[i] = mxMalloc(sizeof(double)*num_labels);
    }


    rin    = mxMalloc( sizeof(double)      * sz ) ;
    gin    = mxMalloc( sizeof(double)      * sz ) ;
    bin    = mxMalloc( sizeof(double)      * sz ) ;

    //---------------------------
    // Perform color conversion
    //---------------------------
    if(numelements/sz == 1)//if it is a grayscale image, copy the values directly into the lab vectors
    {
        for(x = 0, ii = 0; x < width; x++)//reading data from column-major MATLAB matrics to row-major C matrices (i.e perform transpose)
        {
            for(y = 0; y < height; y++)
            {
                i = y*width+x;
                rin[i] = img_target[ii];
                gin[i] = img_target[ii];
                bin[i] = img_target[ii];
                ii++;
            }
        }
    }
    else
    {
        for(x = 0, ii = 0; x < width; x++)
        {
            for(y = 0; y < height; y++)
            {
                i = y*width+x;
                rin[i] = img_target[ii];
                gin[i] = img_target[ii+sz];
                bin[i] = img_target[ii+sz+sz];
                ii++;
            }
        }
    }

    //---------------------------
    //CALCULATE Q_INV AND A_MEAN
    //---------------------------

    int cont;
    int h2;
    double h;
    double matrix[5][5] = {{0}};
    double* A_i[5];
    double x_mean,y_mean,r_mean,g_mean,b_mean;
    double x_cov, y_cov, r_cov, g_cov, b_cov, xy_cov, rg_cov, rb_cov,gb_cov;

    for (y = 0;y<num_labels;y++) {

        h2 = 0;
        h = count[y];
        for (i=0;i<5;i++) {
            A_i[i] = mxMalloc(sizeof(double)*h);
        }

        for (i=0;i<height;i++) {
            for (j=0;j<width;j++) {

                index = i*width+j;
                x = labels_target[j*height+i];

                if(x==y) {
                    A_i[0][h2] = (double)i;
                    A_i[1][h2] = (double)j;
                    A_i[2][h2] = (double)rin[index];
                    A_i[3][h2] = (double)gin[index];
                    A_i[4][h2] = (double)bin[index];
                    h2++;
                }
            }
        }


        x_mean=0;
        y_mean=0;
        r_mean=0;
        g_mean=0;
        b_mean=0;

        for (cont=0;cont<h2;cont++){

            x_mean = x_mean + A_i[0][cont];
            y_mean = y_mean + A_i[1][cont];
            r_mean = r_mean + A_i[2][cont];
            g_mean = g_mean + A_i[3][cont];
            b_mean = b_mean + A_i[4][cont];

        }

        A_mean[0][y] = ((x_mean/(h2))+1)/height;
        A_mean[1][y] = ((y_mean/(h2))+1)/width;
        A_mean[2][y] = r_mean/(255*h2);
        A_mean[3][y] = g_mean/(255*h2);
        A_mean[4][y] = b_mean/(255*h2);


        x_cov = 0;
        y_cov = 0;
        xy_cov = 0;
        r_cov = 0;
        rg_cov = 0;
        rb_cov = 0;
        g_cov = 0;
        b_cov = 0;
        gb_cov = 0;


        for (cont=0;cont<h2;cont++){

            x_cov = x_cov + ((A_i[0][cont]+1)/height-A_mean[0][y])*((A_i[0][cont]+1)/height-A_mean[0][y]);
            y_cov = y_cov + ((A_i[1][cont]+1)/width-A_mean[1][y])*((A_i[1][cont]+1)/width-A_mean[1][y]);
            r_cov = r_cov + (A_i[2][cont]/255-A_mean[2][y])*(A_i[2][cont]/255-A_mean[2][y]);
            g_cov = g_cov + (A_i[3][cont]/255-A_mean[3][y])*(A_i[3][cont]/255-A_mean[3][y]);
            b_cov = b_cov + (A_i[4][cont]/255-A_mean[4][y])*(A_i[4][cont]/255-A_mean[4][y]);

            xy_cov = xy_cov + ((A_i[0][cont]+1)/height-A_mean[0][y])*((A_i[1][cont]+1)/width-A_mean[1][y]);
            rg_cov = rg_cov + (A_i[2][cont]/255-A_mean[2][y])*(A_i[3][cont]/255-A_mean[3][y]);
            rb_cov = rb_cov + (A_i[2][cont]/255-A_mean[2][y])*(A_i[4][cont]/255-A_mean[4][y]);
            gb_cov = gb_cov + (A_i[3][cont]/255-A_mean[3][y])*(A_i[4][cont]/255-A_mean[4][y]);

        }

        matrix[0][0] = par_s*par_s*x_cov/h2;
        matrix[1][1] = par_s*par_s*y_cov/h2;
        matrix[0][1] = par_s*par_s*xy_cov/h2;
        matrix[1][0] = par_s*par_s*xy_cov/h2;
        matrix[2][2] = par_c*par_c*r_cov/h2;
        matrix[2][3] = par_c*par_c*rg_cov/h2;
        matrix[3][2] = par_c*par_c*rg_cov/h2;
        matrix[2][4] = par_c*par_c*rb_cov/h2;
        matrix[4][2] = par_c*par_c*rb_cov/h2;
        matrix[3][3] = par_c*par_c*g_cov/h2;
        matrix[3][4] = par_c*par_c*gb_cov/h2;
        matrix[4][3] = par_c*par_c*gb_cov/h2;
        matrix[4][4] = par_c*par_c*b_cov/h2;

        //----------------------------
        //CALCULATE THE INVERSE
        //----------------------------
        double d[5][5]={{0}};
        double deter;
        deter = (double) det(matrix,5);	// read function
        inverse(matrix,d,5,deter);

        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                Q_inv[i][j][y] = d[i][j];
            }
        }


        for (i=0;i<5;i++) {
            mxFree(A_i[i]);
        }
    }



    //--------------------------------------------
    //Calculate the distance and reconstruct image
    //--------------------------------------------

    double* logw;
    double alpha;
    double* w;
    double sum_w;
    double first[5],multiply[5];
    double sum =0;
    int k,d;
    w = mxMalloc(sizeof(double)*num_labels);
    logw = mxMalloc(sizeof(double)*num_labels);

    for (i=0;i<height;i++) {
        for (j=0;j<width;j++) {

            index = i*width+j;
            x = labels_target[j*height+i];
            for (y=0;y<num_labels;y++) {

                //if(pow((i/height - A_mean[0][y]),2)-pow((j/width - A_mean[1][y]),2)<=r_2) {

                first[0]=(((double)i/(double)height) - A_mean[0][y]);
                first[1]=(((double)j/(double)width) - A_mean[1][y]);
                first[2]=((rin[index]/255) - A_mean[2][y]);
                first[3]=((gin[index]/255) - A_mean[3][y]);
                first[4]=((bin[index]/255) - A_mean[4][y]);

                for (d = 0; d < 5; d++) {
                    for (k = 0; k < 5; k++) {
                        sum = sum + first[k]*Q_inv[k][d][x];
                    }

                    multiply[d] = sum;
                    sum = 0;
                }

                for (k = 0; k < 5; k++) {
                    sum = sum + multiply[k]*first[k];
                }

                logw[y] = -sum;
                sum = 0;
                //}
                //else {
                //	logw[y]= -DBL_MAX;
                //}
            }

            alpha = DBL_MAX;
            for(y=0;y<num_labels;y++){
                if(-logw[y]<alpha){
                    alpha = -logw[y];
                }
            } //alpha = min(-logw);
            sum_w = 0;
            for(y=0;y<num_labels;y++){
                w[y] = exp(logw[y]+alpha);
                sum_w = sum_w+w[y];
            } //w = exp(logw + alpha);

            double sum_r = 0;
            double sum_g = 0;
            double sum_b = 0;

            for(y=0;y<num_labels;y++) {
                sum_r = (double)sum_r + (double)w[y]*R_t[y];
                sum_g = (double)sum_g + (double)w[y]*G_t[y];
                sum_b = (double)sum_b + (double)w[y]*B_t[y];
            }
            rin[index]=sum_r/sum_w; //img_target(pos,pos2,1) = sum(bsxfun(@times,w',C_Br))/sum(w);
            gin[index]=sum_g/sum_w; //img_target(pos,pos2,2) = sum(bsxfun(@times,w',C_Bg))/sum(w);
            bin[index]=sum_b/sum_w; //img_target(pos,pos2,3) = sum(bsxfun(@times,w',C_Bb))/sum(w);

        }
    }


    //---------------------------
    // Assign outputs
    //---------------------------

    double* Q_inv_out;
    Q_inv_out = mxMalloc(sizeof(double)*5*5*num_labels);

    double* A_mean_out;
    A_mean_out = mxMalloc(sizeof(double)*5*num_labels);

    double* img_fin;
    img_fin = mxMalloc(sizeof(double)*sz*3);

    //---------------------------
    // OUTPUT IMAGE
    //---------------------------

    mwSize out_sz[3] = {height, width, 3};

    plhs[0] = mxCreateNumericArray(3,out_sz,mxDOUBLE_CLASS,mxREAL);
    img_fin = mxGetData(plhs[0]);

    for(x = 0, ii = 0; x < width; x++)
    {
        for(y = 0; y < height; y++)
        {
            i = y*width+x;
            img_fin[ii] = rin[i];
            img_fin[ii+sz] = gin[i];
            img_fin[ii+sz+sz] = bin[i];
            ii++;
        }
    }


    //---------------------------
    // OUTPUT A_MEAN
    //---------------------------
    plhs[1] = mxCreateNumericMatrix(5,num_labels,mxDOUBLE_CLASS,mxREAL);
    A_mean_out = mxGetData(plhs[1]);//gives a void*, cast it to int*


    for(ii = 0,index=0;ii<num_labels;ii++){
        for(y = 0; y < 5; y++) {
            A_mean_out[index]=A_mean[y][ii];
            index++;
        }
    }


    //---------------------------
    // OUTPUT Q_INV
    //---------------------------
    mwSize out_sz2[3] = {5, 5, num_labels};
    plhs[2] = mxCreateNumericArray(3,out_sz2,mxDOUBLE_CLASS,mxREAL);
    Q_inv_out = mxGetData(plhs[2]);//gives a void*, cast it to int*

    for(ii = 0,index=0;ii<num_labels;ii++){
        for(x = 0; x < 5; x++){//copying data from row-major C matrix to column-major MATLAB matrix (i.e. perform transpose)
            for(y = 0; y < 5; y++) {
                Q_inv_out[index]=Q_inv[y][x][ii];
                index++;
            }
        }
    }
    //---------------------------
    // Deallocate memory
    //---------------------------
    mxFree(rin);
    mxFree(gin);
    mxFree(bin);

}
