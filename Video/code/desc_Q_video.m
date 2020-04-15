function [A_mean , Q_inv] = desc_Q_video(vid_target,labels,numlabels,count,par_s,par_c)

[i,j,~,k] = size(vid_target);
Q_inv = zeros(6,6,numlabels);
c = ones(1,numlabels);
A_mean = zeros(6,numlabels);

for y = 1:numlabels
    
    A_i = zeros(count(y),6);
    
    for pos3 = 1:k
        for pos = 1:i
            for pos2 = 1:j
                
                
                x = labels(pos,pos2,pos3);
                
                if x == y
                    
                    A_i(c(x),1:3) = [pos/i,pos2/j,pos3/k];
                    A_i(c(x),4:6) = vid_target(pos,pos2,:,pos3)/255;
                    c(x) = c(x)+1;
                    
                end
            end
            
        end
        
    end
    
    X_i = cov(A_i(:,1:3));
    C_i = cov(A_i(:,4:6));
    
    Q_inv(:,:,y) = inv(blkdiag((par_s^2).*X_i,(par_c^2).*C_i));
    A_mean(:,y) = mean(A_i);
end

end


