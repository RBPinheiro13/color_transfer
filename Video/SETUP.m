%% RUN ONCE TO BUILD MEX

clear all
close all
mex -O CFLAGS="\$CFLAGS -Wall -Wextra -W -std=c99" ./code/slicmex.c -outdir ./code/
