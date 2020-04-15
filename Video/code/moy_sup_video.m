function [img_4D,Rm,Gm,Bm,count] = moy_sup_video(img_4D, labels, numlabels)

[i,j,~,k]=size(img_4D);
Rm = zeros(numlabels,1);
Gm = zeros(numlabels,1);
Bm = zeros(numlabels,1);
count = zeros(numlabels,1);

for pos3 = 1:k
    for pos = 1:i
        for pos2 = 1:j
            
            
            x = labels(pos,pos2,pos3);
            
            Rm(x) = Rm(x) + img_4D(pos,pos2,1,pos3);
            Gm(x) = Gm(x) + img_4D(pos,pos2,2,pos3);
            Bm(x) = Bm(x) + img_4D(pos,pos2,3,pos3);
            
            count(x) = count(x) +1;
        end
    end
end

Rm = Rm./count;
Gm = Gm./count;
Bm = Bm./count;


for pos = 1:i
    for pos2 = 1:j
        for pos3 = 1:k
            
            x = labels(pos,pos2,pos3);
            
            img_4D(pos,pos2,1,pos3) = Rm(x);
            img_4D(pos,pos2,2,pos3) = Gm(x);
            img_4D(pos,pos2,3,pos3) = Bm(x);
        end
    end
end
end