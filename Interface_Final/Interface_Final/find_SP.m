function [I, J] = find_SP(labels_target,SP_target)

max_SP_i = 1;
min_SP_i = size(labels_target,1);
max_SP_j = 1;
min_SP_j = size(labels_target,2);


for i = 1:size(SP_target,1)
    
    H = SP_target(i);
    [R,C] = find(labels_target==H);
    
    if min(R)<min_SP_i
        min_SP_i = min(R);
    end
    
    if max(R)>max_SP_i
        max_SP_i = max(R);
    end
    
    if min(C)<min_SP_j
        min_SP_j = min(C);
    end
    
    if max(C)>max_SP_j
        max_SP_j = max(C);
    end
    
end

I = min_SP_i:1:max_SP_i;
J = min_SP_j:1:max_SP_j;

I = I';
J = J';

end


