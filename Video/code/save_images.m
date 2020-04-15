for i = 1:20:80
imwrite(uint8(vid_fin(:,:,:,i)),['FrameFin_',num2str(i),'.png']);
end

for i = 1:20:80
imwrite(uint8(rec_target(:,:,:,i)),['FrameMoy_',num2str(i),'.png']);
end

for i = 1:20:80
imwrite(uint8(img_fin_moy(:,:,:,i)),['FrameCT_',num2str(i),'.png']);
end

for i = 1:20:80
imwrite(uint8(vid_target(:,:,:,i)),['FrameTarg_',num2str(i),'.png']);
end