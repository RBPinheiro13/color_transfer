@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=calcul_final_mex
set MEX_NAME=calcul_final_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for calcul_final > calcul_final_mex.mki
echo COMPILER=%COMPILER%>> calcul_final_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> calcul_final_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> calcul_final_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> calcul_final_mex.mki
echo LINKER=%LINKER%>> calcul_final_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> calcul_final_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> calcul_final_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> calcul_final_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> calcul_final_mex.mki
echo BORLAND=%BORLAND%>> calcul_final_mex.mki
echo OMPFLAGS= >> calcul_final_mex.mki
echo OMPLINKFLAGS= >> calcul_final_mex.mki
echo EMC_COMPILER=msvcsdk>> calcul_final_mex.mki
echo EMC_CONFIG=optim>> calcul_final_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f calcul_final_mex.mk
