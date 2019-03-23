@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=desc_Q_mex
set MEX_NAME=desc_Q_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for desc_Q > desc_Q_mex.mki
echo COMPILER=%COMPILER%>> desc_Q_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> desc_Q_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> desc_Q_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> desc_Q_mex.mki
echo LINKER=%LINKER%>> desc_Q_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> desc_Q_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> desc_Q_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> desc_Q_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> desc_Q_mex.mki
echo BORLAND=%BORLAND%>> desc_Q_mex.mki
echo OMPFLAGS= >> desc_Q_mex.mki
echo OMPLINKFLAGS= >> desc_Q_mex.mki
echo EMC_COMPILER=msvcsdk>> desc_Q_mex.mki
echo EMC_CONFIG=optim>> desc_Q_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f desc_Q_mex.mk
