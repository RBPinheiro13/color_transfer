function [vid_target] = distance2_video(Q_inv,vid_target,A_mean,numlabels_target,labels_target,r_2,C_Br,C_Bg,C_Bb)

[i,j,~,k] = size(vid_target);
logw = zeros(1,numlabels_target);
% w = zeros(numlabels_target,i,j,k);

for pos3 = 1:k
    for pos = 1:i
        for pos2 = 1:j
            
            aux2 = labels_target(pos,pos2,pos3);
            
            for aux = 1:numlabels_target
                
                if (pos/i - A_mean(1,aux))^2+(pos2/j - A_mean(2,aux))^2+(pos3/k - A_mean(3,aux))^2 <= r_2
                    
                    logw(aux) = -([pos/i; pos2/j; pos3/k ; vid_target(pos,pos2,1,pos3)./255; vid_target(pos,pos2,2,pos3)./255; ...
                        vid_target(pos,pos2,3,pos3)./255]- A_mean(:,aux))'*Q_inv(:,:,aux2)* ...
                        ([pos/i; pos2/j; pos3/k ; vid_target(pos,pos2,1,pos3)./255; vid_target(pos,pos2,2,pos3)./255; ...
                        vid_target(pos,pos2,3,pos3)./255] - A_mean(:,aux));
                else
                    
                    logw(aux) = -Inf;
                end
                
            end
            alpha = min(-logw);
            
            w = exp(logw + alpha);
            
            vid_target(pos,pos2,1,pos3) = sum(bsxfun(@times,w',C_Br))/sum(w);
            vid_target(pos,pos2,2,pos3) = sum(bsxfun(@times,w',C_Bg))/sum(w);
            vid_target(pos,pos2,3,pos3) = sum(bsxfun(@times,w',C_Bb))/sum(w); 
        end
        pos
    end
    pos3
end
end

