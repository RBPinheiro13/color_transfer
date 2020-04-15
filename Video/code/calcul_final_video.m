function [img_target] = calcul_final_video(img_target,w,C_Br,C_Bg,C_Bb)

[i,j,~,k] = size(img_target);

for pos = 1:i
    for pos2 = 1:j
        for pos3 = 1:k
            
            img_target(pos,pos2,1,pos3) = sum(bsxfun(@times,w(:,pos,pos2),C_Br))/sum(w(:,pos,pos2));
            img_target(pos,pos2,2,pos3) = sum(bsxfun(@times,w(:,pos,pos2),C_Bg))/sum(w(:,pos,pos2));
            img_target(pos,pos2,3,pos3) = sum(bsxfun(@times,w(:,pos,pos2),C_Bb))/sum(w(:,pos,pos2));
        end
    end
    
end

