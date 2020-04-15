clear;
close all;

%MODIFIER LE NOM DES IMAGES ET LA TAILLE DE SUPERPIXELS EN PIXELS;
img_source = imread('../../Test_Images/scotland_plain.png');
img_target = imread('../../Test_Images/scotland_house.png');

% PARAMETERS TO CHANGE
Sp_Size = 500; %number of pixels in each SP;
rayon = 5; %radius to calculate fusion;
par_c = 0.1; %parameter to calculate fusion (colour);
par_s = 100*par_c; %parameter to calculate fusion (distance);

img_source = imresize(img_source, [360 NaN]);
img_target = imresize(img_target, [360 NaN]); %resize image to make the best calcule;

[i,j,k] = size(img_source); %recuperate the size of image;
[i2,j2,k2] = size(img_target); %recuperate the size of image;

%% Divide the image in superpixels;

[labels_source, numlabels_source] = slicmex(img_source,i*j/Sp_Size,10);%numlabels is the same as number of superpixels
%The second argument is the number of superpixels;
[labels_target, numlabels_target] = slicmex(img_target,i2*j2/Sp_Size,10);

img_source = double(img_source); %Transform the images in double to avoid mistakes;
img_target = double(img_target);

%% Calculate the moyenne in both images;

[rec_source, R_s, G_s, B_s, count_s] = moy_sup5(img_source,labels_source,numlabels_source); %function to give you the mean colours;

[rec_target, R_t, G_t, B_t, count_t] = moy_sup5(img_target,labels_target,numlabels_target);

%% Compute the histograms;

[h_s] = histogram_ac(img_source,labels_source,numlabels_source); %function to calculate the histograms;

[h_t] = histogram_ac(img_target,labels_target,numlabels_target);

%% Make the colour transfer;
tic
[img_fin1,corresp1,~,~,~] = ct_moy_seq(R_s,G_s,B_s, numlabels_source,R_t,G_t,B_t, labels_target, numlabels_target,3);
t1 = toc;

tic
[img_fin2,corresp2,~,~,~] = ct_moy_mat(R_s,G_s,B_s, numlabels_source,R_t,G_t,B_t, labels_target, numlabels_target,3);
t2 = toc;

tic
[img_fin3,corresp3,~,~,~] = ct_moy_seq_mat(R_s,G_s,B_s, numlabels_source,R_t,G_t,B_t, labels_target, numlabels_target,3,1);
t3 = toc;

tic
[img_fin4,corresp4,~,~,~] = ct_hist_seq(R_s,G_s,B_s,h_s, numlabels_source,R_t,G_t,B_t,h_t, labels_target, numlabels_target,3);
t4 = toc;

tic
[img_fin5,corresp5,~,~,~] = ct_hist_mat(R_s,G_s,B_s,h_s, numlabels_source,R_t,G_t,B_t,h_t, labels_target, numlabels_target,3);
t5 = toc;

tic
[img_fin6,corresp6,~,~,~] = ct_hist_seq_mat(R_s,G_s,B_s,h_s, numlabels_source,R_t,G_t,B_t,h_t, labels_target, numlabels_target,3,1);
t6 = toc;

moy_seq = sum(corresp1(:,3));
moy_mat = sum(corresp2(:,3));
moy_seq_mat = sum(corresp3(:,3));
hist_seq = sum(corresp4(:,3));
hist_mat = sum(corresp5(:,3));
hist_seq_mat = sum(corresp6(:,3));
figure(1)

subplot(231)
imshow(uint8(img_fin1));
title(['CT_{Mean}Sequential, t =',num2str(t1),'s'])
xlabel(['Distance =',num2str(moy_seq)])

subplot(232)
imshow(uint8(img_fin2));
title(['CT_{Mean}Minimal, t =',num2str(t2),'s'])
xlabel(['Distance =',num2str(moy_mat)])

subplot(233)
imshow(uint8(img_fin3));
title(['CT_{Mean}Sequential + 1 Iteration, t =',num2str(t3),'s'])
xlabel(['Distance =',num2str(moy_seq_mat)])

subplot(234)
imshow(uint8(img_fin4));
title(['CT_{Hist}Sequential, t =',num2str(t4),'s'])
xlabel(['Distance =',num2str(hist_seq)])

subplot(235)
imshow(uint8(img_fin5));
title(['CT_{Hist}Minimal, t =',num2str(t5),'s'])
xlabel(['Distance =',num2str(hist_mat)])

subplot(236)
imshow(uint8(img_fin6));
title(['CT_{Hist}Sequential + 1 Iteration, t =',num2str(t6),'s'])
xlabel(['Distance =',num2str(hist_seq_mat)])
