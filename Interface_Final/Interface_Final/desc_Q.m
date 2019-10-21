function [A_mean , Q_inv] = desc_Q(img_target,labels,numlabels,count,par_s,par_c);

[i,j,k] = size(img_target);
Q_inv = zeros(5,5,numlabels);
c = ones(1,numlabels);
A_mean = zeros(5,numlabels);
for y = 1:numlabels
    
    A_i = zeros(count(y),5);
    
    for pos = 1:i
        for pos2 = 1:j
            
            x = labels(pos,pos2);
            
            if x == y-1
                
                A_i(c(x+1),1:2) = [pos/i,pos2/j];
                A_i(c(x+1),3:5) = img_target(pos,pos2,:)/255;
                c(x+1) = c(x+1)+1;
                
            end
        end
        
    end
    
    X_i = cov(A_i(:,1:2));
    C_i = cov(A_i(:,3:5));
    
    Q_inv(:,:,y) = inv(blkdiag((par_s^2).*X_i,(par_c^2).*C_i));
    A_mean(:,y) = mean(A_i);
    
end

    
