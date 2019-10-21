function [img,Rm,Gm,Bm,count] = moy_sup5(img, labels, numlabels)

img = double(img);
[i,j,k]=size(img);
Rm = zeros(numlabels,1);
Gm = zeros(numlabels,1);
Bm = zeros(numlabels,1);
count = zeros(numlabels,1);

for pos = 1:i
    for pos2 = 1:j
        
        x = labels(pos,pos2);
        
        Rm(x+1) = Rm(x+1) + img(pos,pos2,1);
        Gm(x+1) = Gm(x+1) + img(pos,pos2,2);
        Bm(x+1) = Bm(x+1) + img(pos,pos2,3);
        
        count(x+1) = count(x+1) +1;
        
    end
end

Rm = Rm./count;
Gm = Gm./count;
Bm = Bm./count;


for pos = 1:i
    for pos2 = 1:j
        
        x = labels(pos,pos2);
        
        img(pos,pos2,1) = Rm(x+1);
        img(pos,pos2,2) = Gm(x+1);
        img(pos,pos2,3) = Bm(x+1);
    end
end

end