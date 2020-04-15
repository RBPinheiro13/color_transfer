%% RUN ONCE TO BUILD MEX
clear;
close all;

mex -O CFLAGS="\$CFLAGS -Wall -Wextra -W -std=c99" ./code/C/slicmex.c -outdir ./code/MEX/
mex -O CFLAGS="\$CFLAGS -Wall -Wextra -W -std=c99" ./code/C/fusion4.c -outdir ./code/MEX/
