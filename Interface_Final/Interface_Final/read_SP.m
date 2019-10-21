function [A] = read_SP(labels_target, numlabels_target,pts )

pts = round(pts');
aux = size(pts,1);

for i = 1:aux
A(i,1) = labels_target(pts(i,2),pts(i,1));
end