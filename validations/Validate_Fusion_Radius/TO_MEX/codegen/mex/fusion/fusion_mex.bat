@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=fusion_mex
set MEX_NAME=fusion_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for fusion > fusion_mex.mki
echo COMPILER=%COMPILER%>> fusion_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> fusion_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> fusion_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> fusion_mex.mki
echo LINKER=%LINKER%>> fusion_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> fusion_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> fusion_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> fusion_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> fusion_mex.mki
echo BORLAND=%BORLAND%>> fusion_mex.mki
echo OMPFLAGS= >> fusion_mex.mki
echo OMPLINKFLAGS= >> fusion_mex.mki
echo EMC_COMPILER=msvcsdk>> fusion_mex.mki
echo EMC_CONFIG=optim>> fusion_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f fusion_mex.mk
