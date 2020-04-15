%% TRANSFER VIDEO
clear;
close all;
addpath(genpath('code'))

frames = 81;

img_source = imread('./data/source_image.jpg');
img_source = imresize(img_source, [240 NaN]);
[i,j,~]=size(img_source);

Sp_Size = 50;

[labels_source, numlabels_source] = slicmex(img_source,i*j/Sp_Size,10);

img_target = imread('./data/video_images/0001.ppm');
[v_x,v_y,v_z] = size(img_target);
vid_target = zeros(v_x,v_y,v_z,frames);
vid_target(:,:,:,1) = img_target;

for aux = 2:frames
    img_target = imread(['./data/video_images/000',num2str(aux),'.ppm']);
    vid_target(:,:,:,aux) = img_target;
end

vid_target = double(vid_target);
img_source = double(img_source);

%% Find the good label

for aux = 0:50
load(['./data/garden/',num2str(aux),'.mat']);
labels_target = svMap(:,:,1:frames);
numlabels_target(aux+1) = max(labels_target(:));
end

[I,J] = find(numlabels_target > 1000);
It_ch = max(J)-1;

load(['./data/garden/',num2str(It_ch),'.mat']);
labels_target = svMap(:,:,1:frames);
numlabels_target = max(labels_target(:));


%% MOYENNE

tic
[rec_source, R_s, G_s, B_s, count_s] = moy_sup5(img_source,labels_source,numlabels_source); %function to give you the image divided in superpixels
toc

tic
[rec_target,R_t,G_t,B_t,count_t] = moy_sup_video(vid_target, labels_target, numlabels_target);
t_moy = toc;


%% COLOR TRANSFER

sp_limit = 2;
n_it = 1;
tic
[vid_fin_moy,corresp_moy,R_t,G_t,B_t] = ct_moy_seq_mat_video(R_s,G_s,B_s, numlabels_source,R_t,G_t,B_t, labels_target, numlabels_target,sp_limit,n_it);
t_transf = toc;

%% COLOR FUSION
Sp_Size_v = mean(histcounts(labels_target,numlabels_target));
r = 3; %radius to calculate fusion;
par_c = 0.1; %parameter to calculate fusion (colour);
par_s = 100*par_c; %parameter to calculate fusion (distance);

r_2 = r.^2*((sqrt(Sp_Size_v)/size(vid_target,1))^2+(sqrt(Sp_Size_v)/size(vid_target,2))^2+(sqrt(Sp_Size_v)/size(vid_target,4))^2);
tic
[ vid_fusion ] = fusion_video(vid_target,labels_target,numlabels_target,count_t,corresp_moy,R_s,G_s,B_s,r_2,par_c,par_s);
t_fusion = toc;

%% NaN correction

k = find(isnan(vid_fusion));
[x, y, c, z] = ind2sub(size(vid_fusion),k);
vid_fusion2 = vid_fusion;

for aux = 1:size(x,1)
vid_fusion2(x(aux),y(aux),c(aux),z(aux))=0;
end

%% REGRAIN

vid_fin = zeros(v_x,v_y,v_z,frames);
tic
for aux2 = 1:size(vid_target,4)
    
    [vid_regrain] = regrain(vid_target(:,:,:,aux2),vid_fusion2(:,:,:,aux2),100);
    vid_fin(:,:,:,aux2) = vid_regrain;
end
t_regrain = toc;


%% Results

% V = VideoWriter('Vid_Target.avi');
% V.FrameRate = 20;
% open(V)
% writeVideo(V,uint8(vid_target));
% close(V)
% 
% V = VideoWriter('Vid_Moyenne.avi');
% V.FrameRate = 20;
% open(V)
% writeVideo(V,uint8(rec_target));
% close(V)
% 
% V = VideoWriter('Vid_Transfert.avi');
% V.FrameRate = 20;
% open(V)
% writeVideo(V,uint8(vid_fin_moy));
% close(V)
% 
% V = VideoWriter('Vid_Fusion.avi');
% V.FrameRate = 20;
% open(V)
% writeVideo(V,uint8(vid_fusion));
% close(V)
% 
% V = VideoWriter('Vid_Fin.avi');
% V.FrameRate = 20;
% open(V)
% writeVideo(V,uint8(vid_fin));
% close(V)
