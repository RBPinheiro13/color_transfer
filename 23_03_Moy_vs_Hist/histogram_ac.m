function [h] = histogram_ac(img,labels,numlabels)
%Function to return the histogram of each superpixel normalized and
%cumulated. 
%
%Example:
%[h] = histogram_ac(img,labels,numlabels)
%
%Where:
% - img(input) = image that you want to calculate the mean in the superpixels
% - labels = labels given by the SLIC function to image
% - numlabels = number of labels in the superpixel division of image
% - h = histogram normalized and cumulated of the image

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