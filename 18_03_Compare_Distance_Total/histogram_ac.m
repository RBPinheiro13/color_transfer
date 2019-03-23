function [h] = histogram_ac(img,labels,numlabels)

R = img(:,:,1);
G = img(:,:,2);
B = img(:,:,3);

X = (0:1:255);


for pos = 1:numlabels
    
    r2 = histcounts(R(labels==pos-1),X);
    g2 = histcounts(G(labels==pos-1),X);
    b2 = histcounts(B(labels==pos-1),X);
    
    h(pos,:,1) = cumsum(r2)/sum(r2);
    h(pos,:,2) = cumsum(g2)/sum(g2);
    h(pos,:,3) = cumsum(b2)/sum(b2);
    
end
end