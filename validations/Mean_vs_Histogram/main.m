clear;
close all;

%MODIFIER LE NOM DES IMAGES ET LA TAILLE DE SUPERPIXELS EN PIXELS;
img_source = imread('../../Test_Images/sea.jpg');
img_target = imread('../../Test_Images/clown.jpg');

Sp_Size = 200; %number of pixels in each SP;
r = [3]; %radius to calculate fusion;
par_c = 0.1; %parameter to calculate fusion (colour);
par_s = 100*par_c; %parameter to calculate fusion (distance);

img_source = imresize(img_source, [360 NaN]);
img_target = imresize(img_target, [360 NaN]);

[i,j,k] = size(img_source);
[i2,j2,k2] = size(img_target);

%% Divide the image in superpixels;

[labels_source, numlabels_source] = slicmex(img_source,i*j/Sp_Size,10);%numlabels is the same as number of superpixels

% imagesc(labels);

[labels_target, numlabels_target] = slicmex(img_target,i2*j2/Sp_Size,10);

img_source = double(img_source);
img_target = double(img_target);

%% Calculate the moyenne in both images;

[rec_source, R_s, G_s, B_s, count_s] = moy_sup5(img_source,labels_source,numlabels_source); %function to give you the image divided in superpixels

[rec_target, R_t, G_t, B_t, count_t] = moy_sup5(img_target,labels_target,numlabels_target);

%% Compute the histograms;

[h_s] = histogram_ac(img_source,labels_source,numlabels_source); %function to calculate the histograms;

[h_t] = histogram_ac(img_target,labels_target,numlabels_target);

%% Make the colour transfer;

sp_limit = 3;
n_it = 3;

[img_fin_moy,corresp_moy] = ct_moy_seq_mat(R_s,G_s,B_s, numlabels_source,R_t,G_t,B_t, labels_target, numlabels_target,sp_limit,n_it);

[img_fin_hist,corresp_hist] = ct_hist_seq_mat(R_s,G_s,B_s,h_s, numlabels_source,R_t,G_t,B_t,h_t, labels_target, numlabels_target,sp_limit,n_it);


%% Colour Fusion;

r_2 = r.^2*((sqrt(Sp_Size)/i2)^2+(sqrt(Sp_Size)/j2)^2);

[img_fusion_moy] = fusion(img_target,labels_target,numlabels_target,count_t,corresp_moy,R_s,G_s,B_s,r_2,par_c,par_s);

[img_fusion_hist] = fusion(img_target,labels_target,numlabels_target,count_t,corresp_hist,R_s,G_s,B_s,r_2,par_c,par_s);


%% Regrain
[img_regrain_moy] = regrain(img_target,img_fusion_moy,100);

[img_regrain_hist] = regrain(img_target,img_fusion_hist,100);

figure(1)
subplot(121)
imshow(uint8(img_fusion_moy));
title(['Color Fusion, r = ',num2str(r),' sp_{limit} = ',num2str(sp_limit),' n_{it} = ',num2str(n_it),' Method Mean',])

subplot(122)
imshow(uint8(img_fusion_hist));
title(['Color Fusion, r = ',num2str(r),' sp_{limit} = ',num2str(sp_limit),' n_{it} = ',num2str(n_it),' Method Hist',])

figure(2)
subplot(121)
imshow(uint8(img_regrain_moy));
title(['Color Fusion, r = ',num2str(r),' sp_{limit} = ',num2str(sp_limit),' n_{it} = ',num2str(n_it),' Method Mean',])

subplot(122)
imshow(uint8(img_regrain_hist));
title(['Color Fusion, r = ',num2str(r),' sp_{limit} = ',num2str(sp_limit),' n_{it} = ',num2str(n_it),' Method Hist',])

saveas(figure(1),['Fusion_.png']);
saveas(figure(2),['Result_.png']);
