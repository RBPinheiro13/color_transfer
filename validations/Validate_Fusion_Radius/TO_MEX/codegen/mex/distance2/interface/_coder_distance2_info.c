/*
 * _coder_distance2_info.c
 *
 * Code generation for function '_coder_distance2_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "distance2.h"
#include "_coder_distance2_info.h"
#include "distance2_data.h"

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
  xInputs = emlrtCreateLogicalMatrix(1, 6);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString("distance2"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(6.0));
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
  const char * data[23] = {
    "789ced5dcd6fdcc615a71ac9490f49daa24092268da3a45f8901d1b1d3c0ed49b622591b4b962cc9b61239a0b9e4ac766a7e6c48aec3dcb60e10e450a0edadb7"
    "e6d0de7aea297f40afbd04c9a1ff408b00bd14fd035acef263b9634a33e2ccec72a5b7c0427ad2ccf07dfdf8e6cdbc21b5b9d6a6967c9e49bef7ffa569e7929f",
    "4f25df6f69e96721a3e792ef8dec67faf779ede98c7e947c2ddf8b501ca5fff44c1769f9c7f65dec995eb4f7710f69010a7de721b287ffe96007ed61176df825"
    "621d2784bb56fa5741907f05ddb0185973ca44fa21727ca18de498af90e351498eef64f4c1eadd0f567ea9df0e5110ea816f07587fc7b7fa2ef2a2505fbdb9bb",
    "dadab9a6ef5ed1b703ff572832f6baf762ebf2bdd8fc856b46f8c33ed277375a2b868be2d12f6f5e312e5e36ee980eb6cd08196bfd10fb9eb163dab81fea7b5b"
    "c6e6eabe6ee330323d0b5d5a7247fc6f33f87f99e29fd0c8750cec4546c70f1cdfef19fe4314741cff23c3ea22eb413aeec563c6cd3fe571737e7ec7e0e73ed5",
    "8fd007ad8dfd55a2d144618781e9be428c18ea9b57f736ae5ed3772e5d7cf36d538f7cdf69fbb19e30af3bb8ad27ba74ccf6903c5e9e2597f075a5c4d7b90abe"
    "e64a7c7dbb9073f0dae60b5f5faddf7fa49769f7ff59a9ff5c457fadf4b34e7b168e3ed5c6ed4e68d5765f3cbe81d1454e0f056c7f9fcbfe36e27f5ec36107d3",
    "76a9eab740c94de884a5cb9732bdc58cfe6b54ffb5ba7aebe018d93d3fb9b64e7827f71001bf5a045cf0b59fb67d9719d77f9aba3ea171e825c12cc05644c270"
    "3d7c585d3320fd068c7e5bd4f5b7a4c85fe23f5104f839dcff59f77fd67dfc1cc53fa193a15d33568b8f77a9ebbe2baa3727f9454f392fcf236bfa17cc8f38db",
    "9f557c606f56f1813dc0c7a8ffb4f1d1f43c9c858fa728fe09ed06367e886d54175fb6df6f3b28bdfe80d15f364efc5ea8e7fc2ff5aaf570023f7bcbfa7caa38"
    "f9b12c9caac6c9406b9e9dabf87892e283d0d930b5e3c949fcbd45f56f49d043ae06b7648f9aeb4a3f7dfe16c40519fe3e293bb3d659cf537c10daf26d142c25",
    "73091478a6b384c36b7dec442def669a9d4ac1c1678cfefb54fffd3afa21df0b4369f40bb9383a2d8ec83aabf6b797fefe15e081a3fd409b0d3cbc42f141680a"
    "0fa1653a28eeadf86e2f998f251e2d030facfd87f7a8feefd5d14f251e1e1347429cd0ce43fe305bb85867f0f13d8a0f4253b84846add6bb8a79d20daaff8d3a",
    "7aa9c4432246a6198179d2799827f1b53fedf973959fbb3dff2391f5a9324e58fb34eb547f420be75543fe85f6a77f04f181affdb4ed0bf903e40f80837aeba4"
    "384c060b703c89f9d006d57f4350fe6c3f2193208d78b09f007ebe405d9fd0d9746622f399eb54ffeb12e4cfc41799ef7ffeef6df06f19feaddabe309f81f94c",
    "137030d08eb7f7b6366e6f424bc2c162c78986bff2acfb3c47f141e88af55033583d9cc8ba8f14bd1cb90e4ac410f2ff3f7db30571a031fecf61e765061fbc75"
    "a6aafd1eea4dc1ef55dddff8f3d90e4ec24977a6ea7ea8fa72c2bf84fa38f077cef6d39bd78efc7db18383304acfbdc0b9333877d6045ccc7a5d75dd736712f2",
    "0decd9286e7911d77ac21a35de5a5d3dc23934881f9abaf396a2eba2e0e7b3ede703ed78fb4e6a3d689fc1c7ab141f84a6eecf66afe77cbc3b44cf5adfb322ec"
    "7b23399719e33f4b8d4fe84e368ad1353ddb415cf3a6036a9c833afaaabc2f5488275e2ff4bf6f2e034e78da37d5eeacbce2458a2f4257d7955e751cdfaab487",
    "8a7d853daaff9e347d95c511de3f867a52cef64db3b78478521ef8a6bf92e6dc55f6505177adee7e522196781cf94d7f1e7022238ebcaf8ddb9dd0b2e65b6966"
    "612499b5191979f184c657870dfb7127f227d88fe36ccfc2c307dab89d092d3bff306cdf35b167a020f079eb891628be088d43cff438fb8bfabfecf31979dd5d",
    "22818c7338b01ecbd97ea035c3ce509f04f5494dc0c3698a07c9448bbb7ff3e241a7efe9430964c4839fdff809c48366c6836a3b433c8078007818f121699dd5"
    "0c96f2a82056bfc1c2c16daadfed3a7aa9c4c185548e928e04d68d5e863c61b670709fc1c7eb141f8466efd3b5bc6dc7b450e93acb8cebf0eed7fd81314e9b1a",
    "a75d476fbcfb36999812ea00ff09fb767ced9b6e7f557145f53c0be2cbe9c2c9403bdede4d3917f47d8a0f425378c8d3f65af582bccf51dda4f8d8aca38f4aff"
    "1fb22feaf71fb611f83d4f7b563decac3f07069e2b792c4ee0b9929ced671d27acb8f25d8a7f4293b27437c22e0a8b12f4623c5579fb2ed58fd0a278794c0ef1",
    "7a0f788e12677b56fe616ae3f626b4027b2f5abeeb2648191ea8084bfcc13a2facf33601274dbb2fb2e205d4439dc88fa01e8ab37dd370c08a0f2f50fc109ac2"
    "41db31c3a5f810b9e5f97addbc7c22faa95e972272e84339c4e74faffef711e0a131783881bd5978f801c50fa1abf0803d077b6824a7aa7c425ddd7daa9f540e",
    "e173167f9dff35cc934e231e38f287211efa213202d421bf0be181553fa6ee79f6a97e4a72c8a89b025c70b667e5d996366e77422bc0c5621b91e71644dd0085"
    "5ddfb10bfe5838f921c51fa1ab70521e59e53cea2ec5cf5dc9fa2ae4107bfe13e083b37dd3e2c63a831fc8af21bf3e0b3860c58597287e084de1209f6e1429b6",
    "cab87087e2e78e3cfd64728c5424905ffff1f70f000f8dc183c4f526c827209f005c3cce0ff73aaced47fd23eca0629f4e793c25f288afc742bce06cdf347bc3"
    "7a2cacc7021ef8f3eae7297e087d549c98447cd8a1faef28d08f84f316101f38db37cdde101f203e001e46fc407e0df975137031bd7379655c546ed7c17e1dec",
    "d74d1d1fb3163738cea916fb14c9d0957698b173aac57e45ae2a01bf8273aa9ced9b666f99fb77c9b8712ee72cefdf113960ffae197898b4bdd719fc405dc789"
    "fc08ea3a38db370d0712f6eb86ef1bdac45ebf7c5e6f76d76347e248588ffdf29908f288b38c8b3db24d5e925342dc197bbfd7947132140f7032ea7fd670c2f2",
    "678e7dbca1236d3bfd701af8b8458d774b9abe0ab164acd7023e38db370d1fac3802ef5385f7a94e0217b3fe5c1cd63ad31363fc3fa1b9d89b485e2efbb95189"
    "5a4cf244d3847f1971c33967013e78da0fb466d859c27cca338343ec59dd072ae3c43daadfbd93ea23ec9a01b2f5348a66b1940ea98524a2752083dfbebd03f3",
    "279ef6b360f72abe1628be080defb528fc07de6bc1d97ea0cd461ce0c8839321b7824d3316daa763e943ddbe44cebed0bec43f0e6cf07b197e3f293bc3fc07e6"
    "3f4d9eff4879af1703078b64c104c55180dc7e5ebf01b8005c002e1ec7c53e83afd728be084de1c2f2bd30bae97bbbd83b7450e47befe0ea739a75f206e57839",
    "526f556209e305eaff38db37152f12f20aa87bd20a7f82ba27cef6ac7314a6366e67422bc58311f6db47e88f777d09dea35df811ecc371b66f3a0e60bf1af6ab"
    "01276c9cb0e6511cefff0a90e3f7f2f19619e3f1be4772c01847ddfbc086e2889e2f3a0ff8e06b7fd6ea3950dc9332cf8a19fdaf53fd092dbe8f97702f761e15",
    "f6ef38db4fdbbe12eac6b3f7a4128f1fc9a5ea391e0a9ffb93bd1f35d54dce0fac3b9d6effbfcfb8feebd4f5090defdd86f76e1fd57fda79c6b4ed2fe1f91efd"
    "106d9b4192ccae901d018d6ffed5bc73dbe362089edbfecb176f003e78da37cddeeb0c7e38f6c18b8155ceabd49d2b2ad897f15ee1fffcf913c0c1598813b06e",
    "0bebb6801375f9b9eae71d409e7e7a70f27f8354944f", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 59248U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_distance2_info.c) */
