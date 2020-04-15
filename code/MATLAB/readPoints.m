function pts = readPoints(image,labels,numlabels ,n)
%readPoints   Read manually-defined points from image
%   POINTS = READPOINTS(IMAGE) displays the image in the current figure,
%   then records the position of each click of button 1 of the mouse in the
%   figure, and stops when another button is clicked. The track of points
%   is drawn as it goes along. The result is a 2 x NPOINTS matrix; each
%   column is [X; Y] for one point.
%
%   POINTS = READPOINTS(IMAGE, N) reads up to N points only.
if nargin < 4
    n = Inf;
    pts = zeros(2, 0);
else
    pts = zeros(2, n);
end
[w, l, ~] = size(image);
imshow(uint8(image));     % display image
title('Choose the Superpixels you want to change colours:');
hold on;
contour (labels, numlabels,'-k');
xold = 0;
yold = 0;
k = 0;
hold on;           % and keep it there while we plot
while 1
    [xi, yi, but] = ginput(1);      % get a point
    if ~isequal(but, 1)             % stop if not button 1
        break
    end
    
    if(xi < 0 || yi < 0 || xi > l || yi > w)
        break
    end
    
    k = k + 1;
    pts(1,k) = xi;
    pts(2,k) = yi;
    plot(xi, yi, '-go');
    [A] = read_SP(labels,numlabels,[xi;yi]);
    Test = labels == A;
    contour (Test,1,'-go');
    
    if isequal(k, n)
        break
    end
    
end

hold off;

if k < size(pts,2)
    pts = pts(:, 1:k);
end

end