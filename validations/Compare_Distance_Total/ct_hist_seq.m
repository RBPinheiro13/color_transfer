function [ img,corresp,R_t,G_t,B_t ] = ct_hist_seq(R_s,G_s,B_s,h_s, numlabels_source,R_t,G_t,B_t,h_t, labels_target, numlabels_target,sp_limit);

V_fin = 9*(255^2);

Check = zeros(1,numlabels_source);

corresp = zeros(numlabels_target,3);

[i,j] = size(labels_target);
img = zeros(i,j,3);

for pos_target = 1:numlabels_target

    for pos_source = 1:numlabels_source

        V_comp = sum((h_t(pos_target,1:end,1)-h_s(pos_source,1:end,1)).^2+(h_t(pos_target,1:end,2)-h_s(pos_source,1:end,2)).^2+(h_t(pos_target,1:end,3)-h_s(pos_source,1:end,3)).^2);

        if Check(pos_source)<sp_limit && V_comp < V_fin;

            pos_end = pos_source;
            V_fin = V_comp;


        end
    end

        Check(pos_end)= Check(pos_end)+1;

        corresp(pos_target,1) = pos_target;
        corresp(pos_target,2) = pos_end;
        corresp(pos_target,3) = V_fin;
        R_t(pos_target) = R_s(pos_end);
        G_t(pos_target) = G_s(pos_end);
        B_t(pos_target) = B_s(pos_end);

        V_fin = 9*(255^2);

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
