@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=distance2_mex
set MEX_NAME=distance2_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for distance2 > distance2_mex.mki
echo COMPILER=%COMPILER%>> distance2_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> distance2_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> distance2_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> distance2_mex.mki
echo LINKER=%LINKER%>> distance2_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> distance2_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> distance2_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> distance2_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> distance2_mex.mki
echo BORLAND=%BORLAND%>> distance2_mex.mki
echo OMPFLAGS= >> distance2_mex.mki
echo OMPLINKFLAGS= >> distance2_mex.mki
echo EMC_COMPILER=msvcsdk>> distance2_mex.mki
echo EMC_CONFIG=optim>> distance2_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f distance2_mex.mk
