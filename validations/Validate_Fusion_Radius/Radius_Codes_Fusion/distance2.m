function [w] = distance2(Q_inv,img_target,A_mean,numlabels_target,labels_target,r_2)

[i,j,k] = size(img_target);
logw = zeros(1,numlabels_target);
w = zeros(numlabels_target,i,j);

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
        
        w(:,pos,pos2) = exp(logw + alpha);
    end
    pos
end
end

