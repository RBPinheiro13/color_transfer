function [img,R_t,G_t,B_t] = sweep_colours(labels_target,SP_target,c_new,R_t,G_t,B_t,n_iter)

numlabels_source = size(c_new,1);
numlabels_target = size(SP_target,1);
R_s = c_new(:,1);
G_s = c_new(:,2);
B_s = c_new(:,3);

V_fin = 9*(255^2);

changes = 0;
corresp = zeros(numlabels_target,3);

[i,j] = size(labels_target);
img = zeros(i,j,3);

for pos_target = 1:numlabels_target
    
    for pos_source = 1:numlabels_source
        
        V_comp(pos_target,pos_source) = (R_t(SP_target(pos_target)+1)-R_s(pos_source))^2+(G_t(SP_target(pos_target)+1)-G_s(pos_source))^2+(B_t(SP_target(pos_target)+1)-B_s(pos_source))^2;
        
        if V_comp(pos_target,pos_source) < V_fin
            
            pos_end = pos_source;
            V_fin = V_comp(pos_target,pos_source);
            
        end
    end
    
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

        R_t(SP_target(:)+1) = R_s(corresp(:,2));
        G_t(SP_target(:)+1) = G_s(corresp(:,2));
        B_t(SP_target(:)+1) = B_s(corresp(:,2));

for pos = 1:i
    for pos2 = 1:j
        
        x = labels_target(pos,pos2);
        
        img(pos,pos2,1) = R_t(x+1);
        img(pos,pos2,2) = G_t(x+1);
        img(pos,pos2,3) = B_t(x+1);
    end
end

end

