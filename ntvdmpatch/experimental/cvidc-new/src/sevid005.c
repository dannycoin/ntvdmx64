#include "sevid000.h"

void S_2405_UnchainedByteWrite_00000002_00000008_00000000 (IU32 eaOff, IU8 eaVal)
{
  UCBWRTF(2405,UCB4MSK,TRANS1,UCBWRTWPL);
}

void S_2406_UnchainedByteWrite_00000002_00000009_00000000 (IU32 eaOff, IU8 eaVal)
{
  UCBWRTF(2406,UCB4MSK,TRANS1,UCBWRTWPD);
}

void S_2407_UnchainedByteWrite_00000002_0000000e_00000000 (IU32 eaOff, IU8 eaVal)
{
  UCBWRTF(2405,UCBMSK,TRANS1,UCBWRTWPL);
}

void S_2408_UnchainedByteWrite_00000002_0000000f_00000000 (IU32 eaOff, IU8 eaVal)
{
  UCBWRTF(2405,UCBMSK,TRANS1,UCBWRTWPD);
}

void S_2409_UnchainedByteFill_00000002_00000008_00000000 (IU32 eaOff, IU16 eaVal, IU32 count)
{
  UCBFLLF(2409,UCB4MSK,TRANS1,UCBPLNBFLL1);
}

void S_2410_UnchainedByteFill_00000002_00000009_00000000 (IU32 eaOff, IU16 eaVal, IU32 count)
{
  UCBFLLF(2410,UCB4MSK,TRANS1,S_2264_Unchained4PlaneByteFill);
}

void S_2411_UnchainedByteFill_00000002_0000000e_00000000 (IU32 eaOff, IU16 eaVal, IU32 count)
{
  UCBFLLF(2411,UCBMSK,TRANS1,UCBPLNBFLL1);
}

void S_2412_UnchainedByteFill_00000002_0000000f_00000000 (IU32 eaOff, IU16 eaVal, IU32 count)
{
  UCBFLLF(2412,UCBMSK,TRANS1,S_2264_Unchained4PlaneByteFill);
}

void S_2413_UnchainedByteMove_00000002_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM)
{
  UCBMOVFW(2413, S_2414_CopyBytePlnByPlnUnchained_00000002_00000008_00000000_00000000);
}

void S_2414_CopyBytePlnByPlnUnchained_00000002_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM)
{
  UCBPLNCPY(2414, S_2415_CopyByte1PlaneUnchained_00000002_00000008_00000000_00000000);
}

void S_2415_CopyByte1PlaneUnchained_00000002_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift)
{
  UCBCPYB1PLN(2415,+1,0,TRANS1,UCB4MSKL);
}

void S_2416_UnchainedByteMove_00000002_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM)
{
  UCBMOVFW(2416, S_2417_CopyByte4PlaneUnchained_00000002_00000009_00000000_00000000);
}

void S_2417_CopyByte4PlaneUnchained_00000002_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM)
{
  UCBCPYB4PLN(2417,+1,TRANS1,UCB4MSKL);
}

void S_2418_UnchainedByteMove_00000002_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM)
{
  UCBMOVFW(2418, S_2419_CopyBytePlnByPlnUnchained_00000002_0000000e_00000000_00000000);
}

void S_2419_CopyBytePlnByPlnUnchained_00000002_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM)
{
  UCBPLNCPY(2419, S_2420_CopyByte1PlaneUnchained_00000002_0000000e_00000000_00000000);
}

void S_2420_CopyByte1PlaneUnchained_00000002_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM, IUH shift)
{
  UCBCPYB1PLN(2420,+1,0,TRANS1,UCBMSKL);
}

void S_2421_UnchainedByteMove_00000002_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM)
{
  UCBMOVFW(2421, S_2422_CopyByte4PlaneUnchained_00000002_0000000f_00000000_00000000);
}

void S_2422_CopyByte4PlaneUnchained_00000002_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM)
{
  UCBCPYB4PLN(2422,+1,TRANS1,UCBMSKL);
}

