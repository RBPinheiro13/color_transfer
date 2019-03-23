%======================================================================
%SLIC demo
% Copyright (C) 2015 Ecole Polytechnique Federale de Lausanne
% File created by Radhakrishna Achanta
% Please also read the copyright notice in the file slicmex.c
%======================================================================
%Input parameters are:
%[1] 8 bit images (color or grayscale)
%[2] Number of required superpixels (optional, default is 200)
%[3] Compactness factor (optional, default is 10)
%
%Ouputs are:
%[1] labels (in raster scan order)
%[2] number of labels in the image (same as the number of returned
%superpixels
%
%NOTES:
%[1] number of returned superpixels may be different from the input
%number of superpixels.
%[2] you must compile the C file using mex slicmex.c before using the code
%below
%======================================================================
%img = imread('someimage.jpg');

clear all;
close all;

mex -O CFLAGS="\$CFLAGS -Wall -Wextra -W -std=c99" slicmex.c -outdir ./

%MODIFIER LE NOM DES IMAGES ET LA TAILLE DE SUPERPIXELS EN PIXELS;
img_source = imread('./Images/scotland_plain.png');
img_target = imread('./Images/scotland_house.png');

Sp_Size = 500; %number of pixels in each SP;
r = [Inf 9 7 5 3 1 0.5]; %radius to calculate fusion;
par_c = 0.1; %parameter to calculate fusion (colour);
par_s = 100*par_c; %parameter to calculate fusion (distance);

img_source = imresize(img_source, [360 NaN]);
img_target = imresize(img_target, [360 NaN]);

[i,j,k] = size(img_source);
[i2,j2,k2] = size(img_target);

%% Divide the image in superpixels;

tic
[labels_source, numlabels_source] = slicmex(img_source,i*j/Sp_Size,10);%numlabels is the same as number of superpixels

% imagesc(labels);

[labels_target, numlabels_target] = slicmex(img_target,i2*j2/Sp_Size,10);

img_source = double(img_source);
img_target = double(img_target);

%% Calculate the moyenne in both images;

[rec_source, R_s, G_s, B_s, count_s] = moy_sup5(img_source,labels_source,numlabels_source); %function to give you the image divided in superpixels

[rec_target, R_t, G_t, B_t, count_t] = moy_sup5(img_target,labels_target,numlabels_target);

%% Make the colour transfer;

[img_fin,corresp] = color_transfer3(R_s,G_s,B_s, numlabels_source,R_t,G_t,B_t, labels_target, numlabels_target,3);

%% Colour Fusion;

r_2 = r.^2*((sqrt(Sp_Size)/i2)^2+(sqrt(Sp_Size)/j2)^2);

for aux = 1:size(r_2,2)
    tic
    [img_fusion] = fusion(img_target,labels_target,numlabels_target,count_t,corresp,R_s,G_s,B_s,r_2(aux),par_c,par_s);
    t = toc
    [img_regrain] = regrain(img_target,img_fusion,100);
    
    figure(1)
    image(uint8(img_fusion)), axis image;
    title(['Image Apres Color Fusion, r = ',num2str(r(aux))])
    xlabel(['Time =',num2str(t),'s'])
    
    figure(2),
    image(uint8(img_regrain)), axis image;
    title(['Image Apres Color Fusion, r = ',num2str(r(aux))])
    xlabel(['Time =',num2str(t),'s'])
    
    saveas(figure(1),['Fusion_',num2str(aux),'.png']);
    saveas(figure(2),['Result_',num2str(aux),'.png']);
    
end