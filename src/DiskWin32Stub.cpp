#include "DiskWin32.h"

dword CDiskWin32::GetDriverVersion()
{
	return 0;
}

CDiskWin32::CDiskWin32(CDiskBase::DiskDescType diskDesc): CDiskBase(diskDesc)
{
}

CDiskWin32::CDiskWin32(): CDiskBase()
{
}

CDiskWin32::~CDiskWin32()
{
}


bool CDiskWin32::ReadSectors(byte *buf,byte track,byte head,byte sect,byte sectNO)
{
	return false;
}

bool CDiskWin32::WriteSectors(byte track, byte side, byte sect, byte sectCnt, byte * buf)
{
	return false;
}

bool CDiskWin32::Open(char* drive, DiskOpenMode mode)
{
	return false;
}

bool CDiskWin32::FormatTrack(byte track, byte side)
{
	return false;
}

bool CDiskWin32::GetTrackInfo(byte track, byte side, byte& sectorCnt, SectDescType sectorsInfo[])
{
	return false;
}

bool CDiskWin32::Seek(byte track)
{
	return false;
}
