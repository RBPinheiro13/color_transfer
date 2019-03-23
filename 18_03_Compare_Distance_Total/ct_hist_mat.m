function [ img,corresp ] = ct_hist_mat(R_s,G_s,B_s,h_s, numlabels_source,R_t,G_t,B_t,h_t, labels_target, numlabels_target,sp_limit);

Check = zeros(1,numlabels_source);

corresp = zeros(numlabels_target,3);

[i,j] = size(labels_target);
img = zeros(i,j,3);

for pos_target = 1:numlabels_target
    
    for pos_source = 1:numlabels_source
        
        V_comp(pos_target,pos_source) = sum((h_t(pos_target,1:end,1)-h_s(pos_source,1:end,1)).^2+(h_t(pos_target,1:end,2)-h_s(pos_source,1:end,2)).^2+(h_t(pos_target,1:end,3)-h_s(pos_source,1:end,3)).^2);
    end
end

for pos_target = 1:numlabels_target
    
    d_min = min(V_comp(:));
    [x,y] = find(V_comp==d_min);
    
    if Check(1,y)<(sp_limit-1)
        
        Check(y)= Check(y)+1;
        
        corresp(x,1) = x;
        corresp(x,2) = y;
        corresp(x,3) = d_min;
        R_t(x) = R_s(y);
        G_t(x) = G_s(y);
        B_t(x) = B_s(y);
        V_comp(x,:) = NaN;
        
    elseif Check(1,y)==(sp_limit-1)
        
        Check(y)= Check(y)+1;
        
        corresp(x,1) = x;
        corresp(x,2) = y;
        corresp(x,3) = d_min;
        R_t(x) = R_s(y);
        G_t(x) = G_s(y);
        B_t(x) = B_s(y);
        V_comp(x,:) = NaN;
        V_comp(:,y) = NaN;
        
    end
end

for pos = 1:i
    for pos2 = 1:j
        
        x = labels_target(pos,pos2);
        
        img(pos,pos2,1) = R_t(x+1);
        img(pos,pos2,2) = G_t(x+1);
        img(pos,pos2,3) = B_t(x+1);
    end
end

end
