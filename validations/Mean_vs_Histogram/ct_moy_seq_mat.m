function [ img,corresp ] = ct_moy_seq_mat(R_s,G_s,B_s, numlabels_source,R_t,G_t,B_t, labels_target, numlabels_target,sp_limit,n_iter)
%Fonction to do the correspondance between superpixels in images.
%Where RGB are divided in 3 columns for each image, source and target¨
%The other parameters are provided by the division in superpixel after
%SLIC. Sp_limit is the limit of superpixels that can be corresponded from
%the source image and n_iter is the number of iterations you want to make
%to reduce the global distance of the transfer. 
%
%Example:
%[ img,corresp ] = ct_moy_seq_mat(R_s,G_s,B_s, numlabels_source,R_t,G_t,B_t, labels_target, numlabels_target,sp_limit,n_iter)
%
%Where: 
% - R_s,G_s,B_s = RGB of the SOURCE image
% - numlabels_source = number of labels in the superpixel division of SOURCE image
% - R_t,G_t,B_t = RGB of the TARGET image
% - labels_target = labels given by the SLIC function to TARGET image
% - numlabels_target = number of labels in the superpixel division of TARGET image
% - sp_limit = the limit of superpixels that can be corresponded from the source image
% - n_iter = the number of iterations you want to make to reduce the global distance of the transfer. 

V_fin = 9*(255^2);

Check = zeros(1,numlabels_source);
changes = 0;
corresp = zeros(numlabels_target,3);

[i,j] = size(labels_target);
img = zeros(i,j,3);

for pos_target = 1:numlabels_target
    
    for pos_source = 1:numlabels_source
        
        V_comp(pos_target,pos_source) = (R_t(pos_target)-R_s(pos_source))^2+(G_t(pos_target)-G_s(pos_source))^2+(B_t(pos_target)-B_s(pos_source))^2;
        %V_comp = sqrt(2*(R_t(pos_target)-R_s(pos_source))^2+3*(G_t(pos_target)-G_s(pos_source))^2+4*(B_t(pos_target)-B_s(pos_source))^2);
        % = 2*(R_t(pos_target)-R_s(pos_source))^2+4*(G_t(pos_target)-G_s(pos_source))^2+3*(B_t(pos_target)-B_s(pos_source))^2;
        
        if Check(pos_source)<sp_limit && V_comp(pos_target,pos_source) < V_fin;
            
            pos_end = pos_source;
            V_fin = V_comp(pos_target,pos_source);
            
            
        end
        
    end
    
    Check(pos_end)= Check(pos_end)+1;
    
    corresp(pos_target,1) = pos_target;
    corresp(pos_target,2) = pos_end;
    corresp(pos_target,3) = V_fin;
    
    V_fin = 9*(255^2);
    
end

for iter = 1:n_iter
    
    for pos_target2 = 2:numlabels_target
        
        for pos_target3 = 1:pos_target2-1
            
           if (corresp(pos_target3,3)+ corresp(pos_target2,3)) > V_comp(pos_target3,corresp(pos_target2,2)) + V_comp(pos_target2,corresp(pos_target3,2))

               aux = corresp(pos_target3,2);
               corresp(pos_target3,2) = corresp(pos_target2,2);
               corresp(pos_target2,2) = aux;
               corresp(pos_target3,3) = V_comp(pos_target2,corresp(pos_target3,2));
               corresp(pos_target2,3) = V_comp(pos_target3,corresp(pos_target2,2));
               changes = changes+1;
               
           end
        end
    end
end

        R_t(corresp(:,1)) = R_s(corresp(:,2));
        G_t(corresp(:,1)) = G_s(corresp(:,2));
        B_t(corresp(:,1)) = B_s(corresp(:,2));
        

for pos = 1:i
    for pos2 = 1:j
        
        x = labels_target(pos,pos2);
        
        img(pos,pos2,1) = R_t(x+1);
        img(pos,pos2,2) = G_t(x+1);
        img(pos,pos2,3) = B_t(x+1);
    end
end

end
