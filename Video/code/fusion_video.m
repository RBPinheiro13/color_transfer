function [ vid_fin ] = fusion_video(vid_target,labels_target,num_labels,count,corresp,R_s,G_s,B_s,r_2,par_c,par_s)
%Function to calculate the fusion after the colour transfer.
%We calculate the distance using an algorithm similar to the Mahalanobis
%distance, using each pixel descriptor (colour and position) to calculate
%the new pixel colour. We use MEX to make things a little faster. The
%corresponding .m are in the project directory if you want to take a look.
%
%Example:
%[ img_fin ] = fusion(img_target,labels_target,num_labels,count,corresp,R_s,G_s,B_s,r_2,par_c,par_s)
%
%Where: 
% - img_target = your target image
% - labels_target = labels given by the SLIC function to target image
% - num_labels = number of labels in the superpixel division of targ_image
% - count = parameter given by the moy_sup function that tells how many
% pixels are there in each superpixel
% - corresp = parameter given by the colour transfer function that tells
% the superpixel match that was performed
% - R_s,G_s,B_s = RGB of the SOURCE image
% - r_2 = radius that you want to calculate the distance (must be superior
% to 1)
% - par_c = parameter that multiplies the colour covariance
% - par_s = parameter that mulitiplies the distance covariance

C_Br = zeros(num_labels,1);
C_Bg = zeros(num_labels,1);
C_Bb = zeros(num_labels,1);
%Calculer les covariances dans chaque superpixel;
%Calculer les matrix Q;

for L = 1:num_labels
    
    Sp_source = corresp(L,2);
    C_Br(L,1) = R_s(Sp_source);
    C_Bg(L,1) = G_s(Sp_source);
    C_Bb(L,1) = B_s(Sp_source);
end

[A_mean , Q_inv] = desc_Q_video(vid_target,labels_target,num_labels,count,par_s,par_c);
%Caculer distance w;
[vid_fin] = distance2_video(Q_inv,vid_target,A_mean,num_labels,labels_target,r_2,C_Br,C_Bg,C_Bb);
end
