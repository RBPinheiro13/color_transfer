function [img_target] = distance2(Q_inv,img_target,A_mean,numlabels_target,labels_target,r_2,C_Br,C_Bg,C_Bb)

[i,j,~] = size(img_target);
logw = zeros(1,numlabels_target);

for pos = 1:i
    for pos2 = 1:j
        
        aux2 = labels_target(pos,pos2);
        
        for aux = 1:numlabels_target
            
            if (pos/i - A_mean(1,aux))^2+(pos2/j - A_mean(2,aux))^2<=r_2
            
            logw(aux) = -([pos/i; pos2/j; img_target(pos,pos2,1)./255; img_target(pos,pos2,2)./255; ...
                img_target(pos,pos2,3)./255]- A_mean(:,aux))'*Q_inv(:,:,aux2+1)* ...
                ([pos/i; pos2/j; img_target(pos,pos2,1)./255; img_target(pos,pos2,2)./255; ...
                img_target(pos,pos2,3)./255] - A_mean(:,aux));
            else 
            
                logw(aux) = -Inf;
            end
            
        end
        alpha = min(-logw);
        
        w = exp(logw + alpha);
		
		img_target(pos,pos2,1) = sum(bsxfun(@times,w',C_Br))/sum(w);
        img_target(pos,pos2,2) = sum(bsxfun(@times,w',C_Bg))/sum(w);
        img_target(pos,pos2,3) = sum(bsxfun(@times,w',C_Bb))/sum(w);
		
		
    end
end

a = 1+1;
end

