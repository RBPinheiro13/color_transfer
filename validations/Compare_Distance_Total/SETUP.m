%% RUN ONCE TO BUILD MEX
clear;
close all;

mex -O CFLAGS="\$CFLAGS -Wall -Wextra -W -std=c99" slicmex.c -outdir ./