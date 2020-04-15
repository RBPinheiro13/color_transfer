function [img,corresp2,R_t,G_t,B_t] = ct_manual(labels_target, corresp2, SP_target, SP_source, R_s,G_s,B_s, numlabels_source,R_t,G_t,B_t,numlabels_target,n_iter)

V_fin = 9*(255^2);

changes = 0;
corresp = zeros(numlabels_target,3);

[i,j] = size(labels_target);
img = zeros(i,j,3);

for pos_target = 1:numlabels_target
    
    for pos_source = 1:numlabels_source
        
        V_comp(pos_target,pos_source) = (R_t(SP_target(pos_target)+1)-R_s(SP_source(pos_source)+1))^2+(G_t(SP_target(pos_target)+1)-G_s(SP_source(pos_source)+1))^2+(B_t(SP_target(pos_target)+1)-B_s(SP_source(pos_source)+1))^2;
        
        if V_comp(pos_target,pos_source) < V_fin
            
            pos_end = pos_source;
            V_fin = V_comp(pos_target,pos_source);
            
        end
    end
    
    corresp(pos_target,1) = pos_target;
    corresp(pos_target,2) = pos_end;
    corresp(pos_target,3) = V_fin;
    
    corresp2(SP_target(pos_target)+1,2) = SP_source(pos_end)+1;
    corresp2(SP_target(pos_target)+1,3) = V_fin;
    
    
    V_fin = 9*(255^2);
    
end

for iter = 1:n_iter
    
    for pos_target2 = 2:numlabels_target
        
        for pos_target3 = 1:pos_target2-1
            
            if (corresp(pos_target3,3)+ corresp(pos_target2,3)) > V_comp(pos_target3,corresp(pos_target2,2)) + V_comp(pos_target2,corresp(pos_target3,2))
                
                aux = corresp(pos_target3,2);
                corresp(pos_target3,2) = corresp(pos_target2,2);
                corresp(pos_target2,2) = aux;
                
                aux2 = corresp2(SP_target(pos_target3),2);
                corresp2(SP_target(pos_target3)+1,2) = corresp2(SP_target(pos_target2)+1,2);
                corresp2(SP_target(pos_target2)+1,2) = aux2;
                
                corresp(pos_target3,3) = V_comp(pos_target2,corresp(pos_target3,2));
                corresp(pos_target2,3) = V_comp(pos_target3,corresp(pos_target2,2));
                
                corresp2(SP_target(pos_target3)+1,3) = V_comp(pos_target2,corresp(pos_target3,2));
                corresp2(SP_target(pos_target2)+1,3) = V_comp(pos_target3,corresp(pos_target2,2));
                
                changes = changes+1;
                
            end
        end
    end
end

        R_t(SP_target(:)+1) = R_s(SP_source(corresp(:,2))+1);
        G_t(SP_target(:)+1) = G_s(SP_source(corresp(:,2))+1);
        B_t(SP_target(:)+1) = B_s(SP_source(corresp(:,2))+1);

for pos = 1:i
    for pos2 = 1:j
        
        x = labels_target(pos,pos2);
        
        img(pos,pos2,1) = R_t(x+1);
        img(pos,pos2,2) = G_t(x+1);
        img(pos,pos2,3) = B_t(x+1);
    end
end

end
