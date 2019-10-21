function [img_fin, A_mean, Q_inv] = fusion(img_target,labels_target,num_labels,count,R_t,G_t,B_t,r_2,par_c,par_s)

%Calculer les matrix Q;
[A_mean , Q_inv] = desc_Q(img_target,labels_target,num_labels,count,par_s,par_c);

%Caculer distance w;
[img_fin] = distance2(Q_inv,img_target,A_mean,num_labels,labels_target,r_2,R_t,G_t,B_t);

end

