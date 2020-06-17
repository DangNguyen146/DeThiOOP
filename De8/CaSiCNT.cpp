#include "CaSiCNT.h"

long CaSiCNT::TinhLuong()
{
	Luong= 3000000 + 500000 * SoNamLamViec + 1000 * SoDiaBanDuoc + 200000 * SoBuoiDienTG;
	return Luong;
}