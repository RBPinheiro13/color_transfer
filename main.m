clear;
close all;
addpath(genpath('code'))

%Get the full name of the images you want to use for the fusion
prompt = 'Source Colors (Image with the colors): ';
prompt2 = 'Target Image (Target image to apply the colors): ';
path_source = char(inputdlg(prompt));

path_target = char(inputdlg(prompt2));

img_source = imread(path_source);
img_target = imread(path_target);

Sp_Size = 1000; %number of pixels in each SP;
r = 3; %radius to calculate fusion;
par_c = 0.1; %parameter to calculate fusion (colour);
par_s = 100*par_c; %parameter to calculate fusion (distance);

% Resizing is optional to make the code run faster. You can comment the following 2 lines

% img_source = imresize(img_source, [360 NaN]);
% img_target = imresize(img_target, [360 NaN]);

[i,j,k] = size(img_source);
[i2,j2,k2] = size(img_target);

%% Divide the image in superpixels;

[labels_source, numlabels_source] = slicmex(img_source,i*j/Sp_Size,10);%numlabels is the same as number of superpixels

% imagesc(labels);

[labels_target, numlabels_target] = slicmex(img_target,i2*j2/Sp_Size,10);

img_source = double(img_source);
img_target = double(img_target);
numlabels_target = double(numlabels_target);
numlabels_source = double(numlabels_source);
labels_target = double(labels_target);
labels_source = double(labels_source);

%% Calculate the moyenne in both images;

[rec_source, R_s, G_s, B_s, count_s] = moy_sup5(img_source,labels_source,numlabels_source); %function to give you the image divided in superpixels

[rec_target, R_t, G_t, B_t, count_t] = moy_sup5(img_target,labels_target,numlabels_target);

%% Make the colour transfer;

[img_fin,corresp,R_t,G_t,B_t] = ct_moy_seq_mat(R_s,G_s,B_s, numlabels_source,R_t,G_t,B_t, labels_target, numlabels_target,3,1);
corresp2 = corresp;

%% Colour Fusion;

r_2 = r^2*((sqrt(Sp_Size)/i2)^2+(sqrt(Sp_Size)/j2)^2);

tic
[img_fusion, A_mean, Q_inv] = fusion4(img_target,labels_target,numlabels_target,count_t,R_t,G_t,B_t,r_2,par_c,par_s);
t_matlab =toc;
[img_regrain] = regrain(img_target,img_fusion,200);

figure(1),
imshow(uint8(img_regrain));
hold on;

%% SELECT Pixels
c = 1;

while c == 1;

    choice = menu('What do you wish to do?','Change Image Colours','Keep this image','Quit');

    switch choice
        case 1

            %             imshow(uint8(img_regrain));
            %             hold on;
            %             contour (labels_target , numlabels_target ,'-go');

            R = menu('Where do you want to get the new colours from?','From Source Image','From Colours Palette');

            switch R
                case 1
                    if R == 1

                        % Choose the pixel

                        pts_target = readPoints(img_regrain, labels_target,numlabels_target);
                        pts_source = readPoints(rec_source,labels_source,numlabels_source);

                        % Select corresponding superpixel

                        SP_target = read_SP(labels_target,numlabels_target,pts_target);
                        SP_source = read_SP(labels_source,numlabels_source,pts_source);

                        %% Sweep Colours and Reshow Image

                        [img_fin,corresp2,R_t,G_t,B_t] = ct_manual(labels_target, corresp2, SP_target, SP_source, R_s,G_s,B_s, size(SP_source,1),R_t,G_t,B_t,size(SP_target,1),1);

                        %[img_fusion] = fusion_mex(img_target,labels_target,numlabels_target,count_t,R_t,G_t,B_t,r_2,par_c,par_s);

                        %[img_fusion] = fusion_2_mex(img_fusion,img_target,A_mean,Q_inv,labels_target,numlabels_target,R_t,G_t,B_t,r_2,SP_target);

						[img_fusion, A_mean, Q_inv] = fusion4(img_target,labels_target,numlabels_target,count_t,R_t,G_t,B_t,r_2,par_c,par_s);

                        [img_regrain] = regrain(img_target,img_fusion,100);

                        imshow(uint8(img_regrain));

                    end
                case 2

                    pts_target = readPoints(img_regrain, labels_target,numlabels_target);
                    SP_target = read_SP(labels_target,numlabels_target,pts_target);

                    prompt = {'How many colours do you want to pick from the palette?'};
                    dlg_title = 'Number of Colours';
                    num_lines = 1;
                    def = ("");
                    answer = inputdlg(prompt,dlg_title,num_lines,def);
                    c_n = str2num(cell2mat(answer));
                    c_new = zeros(c_n,3);
                    for c_aux = 1:c_n

                        c_new(c_aux,:) = 255*uisetcolor('RGB');

                    end

                    [img_fin,R_t,G_t,B_t] = sweep_colours(labels_target,SP_target,c_new,R_t,G_t,B_t,1);

                    %[img_fusion] = fusion_mex(img_target,labels_target,numlabels_target,count_t,R_t,G_t,B_t,r_2,par_c,par_s);

                    %[img_fusion] = fusion_2_mex(img_fusion,img_target,A_mean,Q_inv,labels_target,numlabels_target,R_t,G_t,B_t,r_2,SP_target);

					[img_fusion, A_mean, Q_inv] = fusion4(img_target,labels_target,numlabels_target,count_t,R_t,G_t,B_t,r_2,par_c,par_s);

                    [img_regrain] = regrain(img_target,img_fusion,100);

                    imshow(uint8(img_regrain));


            end

        case 2
            saveas(figure(1),'Result_.png');
            c = 0;
            close all;
            break

        case 3
            c = 0;
            close all;
            break

    end

end
