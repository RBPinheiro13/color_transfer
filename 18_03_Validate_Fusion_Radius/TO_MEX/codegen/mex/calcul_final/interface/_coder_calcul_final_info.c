/*
 * _coder_calcul_final_info.c
 *
 * Code generation for function '_coder_calcul_final_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "calcul_final.h"
#include "_coder_calcul_final_info.h"
#include "calcul_final_data.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 5);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString("calcul_final"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("9.0.0.341360 (R2016a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "CoverageInfo", covrtSerializeInstanceData
                (&emlrtCoverageInstance));
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[17] = {
    "789ced5dcd6fdc44149fd0b49443a170802250dbb4e24b45714ba12a9c92a689b2345fe4a34d95568ed79ecd0eb53d5bdb1bb6b71552510f48c0057a44a87f44"
    "ff00ae9c8003671052ff0b66d6deeceec4bb63ecf1ae93be95369b979d19bfaf9fdf7bf3e1a0b1d22262af97d97bfb27848eb1cfe3ecfd020a5f47237a8cbd2f",
    "459fe1dfc7d18988fe9abd4dea06b811845fba868351fb655187b8861bac3fa861e4619fdabbd86a7d5321365e270e5ea05dc43c618433d7f5d51ec1bff2aafe"
    "dec8c8ee26c21797e329eac8311e23c7c32e394e46f4d6ecadbb339f691b3ef67ccda39647b4ebd4ac3bd80d7c6d76696db6b47a4d5bbbaaad78f44b1ce8ebd5",
    "3b0df3f29d86f1a96304e47e1d6b6b0ba519ddc18dce2f97aeea172feb370d9b584680f5b9ba4fa8abaf1a16a9fbdafab2be38bba999866dd66dbdc234644f3a"
    "11ff5725fc1f13f8e774d96f54ea6ed87f4ad2ff15a13fa7596733e0fc550dd7b2716b9ca6649ccf857138bd555ad89ce59a648adaf10ce72c379eaf2d4eaf2f",
    "4c5fd3563fba78e98aa10594da65dad0b0636b36296b4c87b651d6b0cd7ed142495aca88d1c7b1183ec6baf87829fa3be3fedce29b7f4ea7ef9ff5faeafabfdf"
    "d57f2ca63feafa4cd3fe7b34d8ce7750af9d39adcece13e12fba499d1ac352d9c66dbe56247c9d16f8e234bb944edc40af50cfa6b4a6d35dec556cfa956e56b1",
    "792f1cf7e28071dbafee7193ea695be8b79d554f8c1c2ccfa493011fe7011fc9dacbe2c937a8d7ee9ccedbee13831be8556cd7b027f7f7b1e86f1dfec711f12b"
    "84f79b97f47b43909bd326b5b037c918c31e0f69c4b570a3e4062d3e1a92f1e684f1e6d2eab1421ad8aa51c685c665e1b124839f4d004e92b51fb57da724d73f",
    "215c9fd3c4775992e71133e0e9693abc9855c34b922f2d0bd75f56227f17ff4c11e0e7100f64f1204d7dc186768c46bef8c8a79e0839cf5e4f20c89712b67f5e"
    "f141dc838a0fa2a0de067c246d2fab2375d46b674e2bacb75daa5b0f5cc321a68e1b35c3e5d352506f43bd5d187c34d128ee83fbe71d65f7f1233d7c1c413c41",
    "caa36e96e9a3248c57caa80fcb080ca60aad2b6dcae237f63113fc5e85df0fcbce32ff3d25f0c169c17f5dc3db21ae59bd97e7fd3ff3bcb4cf122f6c692ddea3"
    "9f17a28fb624da9e24a18a32dcffbfbbb2fa07e02041fb8360f738be8e0a7c719ae50ed44bd83faeaeb068bdb522328afb03b6f9dda125818a38f0c98d77210e",
    "14310ef4b3b3ac1e3823f0c169318ff1afd5891d94dca5709652090e1e49fa6f0afd37d3e887bff7dd144471b2d403e8d7b77f83787098f0f096c007a7053cf8"
    "a6611bde643b2a64ab8f6538d810fa6da4d14b2c0e2e847274e928435e741aeae28385836d091f1f087c705ac08151abd90fd65a4e3417ed3c2ab92bb661e2ae",
    "eb4c49ae93741fd363c93865619c721abdc5e2a4bf980ae65bff7d76197093a47dd1ed9f575cc93bcf82f872b870d244c38d2f69e79f12cc9f3ac45df616a3f9"
    "d8bcd6e356043e56d2e823d6ffdbec67aa2ffedab2c0ef55f8fdb0ec2cf37b98778579d751cebbde45bd76e7b46a1cb4f669e046e061a7de8efb800bc04591eb",
    "0703f5da9dd3b9e0a24cdc6e6cb4f953902f85f9f6ecce48d6aff38baf6db132e5514f9e2d431e55ec3caad7ce53123e92ee031f360e607f38e020affb5d1c1f"
    "c7053e38cdcf53b0f2bc3a0aff57b6af4b381fc2e55130df0afe9fb0fd2334d8cef9adcf76fc7fa2423c3f08cfb1c1be56d8d70ab8d88f0b38170af100ea6765",
    "eb6fb8519bb66d6aee8dab1a27b2fbc7ba30deba323d768b9775de099d01dca88917c3b6f7a6849f73023f9c1e8093253a13e652edf155e34596676d09e36de5"
    "a2bf48cca800c990677d5b1f07dca8883755d46b774ee7126fc2b4ab27ecc07c2dccd7024e92e124affde7c3cecb603ffae1c24d130db6f7b0cea7c2bc16cc6b",
    "011e3a7ca8ceabf23eaf0779d4f3e1ff076ddd3b6fbf87756ef0fb22ad73e7edefb0ae7d38fc7d74759edaf5bbacfe0eeb7587dbcf9fa2c1f67d887aedcbe922"
    "3d3f5f860bf1b94d7e7d7fbe70109ecfd13e3fc5f857f07c8ee60fb7e0bc9092bc6758769e97f001e72252e100ce45246cdf44c5c081ecbefda2c007a7d91835",
    "16a612c58b7ee74365f9e04de1ba3723f957b22aa0e6915d1612b548886c7951f3f15db8ef2bc9ff876defbcd6c7f27e6e00ac87012ef2c4852c2f7a5de087d3"
    "acbf897d5f8f86d2895bab077eb27aa25f7c90adaf63810fac5a2ff142657d9ec68f4f08c48b24ed8b6e7fa81fa07e007cf4c7876cbfeb79813f4e0bf830a9eb",
    "074bd45d23ee8e8d03ea5e27f1fb40d3e459b9e3a66f9e15275666dcc0739a12b62f3a6e647105f661fc2fbf827d1809db17ad0e49332f457c7cbf6ed843f1fb"
    "1b42ff1b48c9ff130a25c87edee1e13f1ffe0e7e9fa07d1315c3ce53123e4e0a7cb46213dfbf198ea49bd4c3c3c88bfa3dc72af57d205448fb2e208a94b1de46",
    "bffc0df7ff44ed8b6a77593e047536d4d9cf535e94ae3e70cac4c5fa2e3603eae9d8c6adad2589e28eaae7845784712aaaf5d447c88ceb7baf6ec0fa5ea2f645"
    "b73f9cf781f33e45c0c941df1f9866bfb8e3596497584aea93a6a4bfeaf352b4e66b6dfe276b1d3ba6f4b38fcd9f478a937754e1346f9c3451f1ec9c741e2a1a",
    "e640ee8be57a68ab41c1bed8f74e7d01714185bf0fcbceb02f0af645011e3a7cc8f07056e083d3f1cf6d9aa14e8de563cca387314f7b5be87f3b8d7e063d9fa9"
    "238e8aff6f0acf354bd8be898a818b79091faf097c705ac0051b355eef855daf8bc5031323fb7add19c893e4edff03cdf3aba4",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 38768U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_calcul_final_info.c) */
