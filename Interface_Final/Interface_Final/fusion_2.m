function [ img_fin ] = fusion_2(img_fusion,img_target,A_mean, Q_inv, labels_target,num_labels,R_t,G_t,B_t,r_2,SP_target)

%Find superpixels to calculate fusion;
[I, J] = find_SP(labels_target,SP_target);

%Caculer distance w;
[img_fin] = distance2_2(img_fusion,Q_inv,img_target,A_mean,num_labels,labels_target,r_2,R_t,G_t,B_t,SP_target,I,J);

end

