function [ img_fin ] = fusion(img_target,labels_target,num_labels,count,corresp,R_s,G_s,B_s,r_2,par_c,par_s)

C_Br = zeros(num_labels,1);
C_Bg = zeros(num_labels,1);
C_Bb = zeros(num_labels,1);
%Calculer les covariances dans chaque superpixel;
%Calculer les matrix Q;
[A_mean , Q_inv] = desc_Q(img_target,labels_target,num_labels,count,par_s,par_c);
%Caculer distance w;
[w] = distance2(Q_inv,img_target,A_mean,num_labels,labels_target,r_2);
% reorganization des coleurs
for L = 1:num_labels
    
    Sp_source = corresp(L,2);
    C_Br(L,1) = R_s(Sp_source);
    C_Bg(L,1) = G_s(Sp_source);
    C_Bb(L,1) = B_s(Sp_source);
end
%% Transform in function in c
[img_fin] = calcul_final(img_target,w,C_Br,C_Bg,C_Bb);
end

