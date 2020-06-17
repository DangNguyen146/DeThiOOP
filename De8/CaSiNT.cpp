#include "CaSiNT.h"
void CaSiNT::Nhap()
{
	CaSi::Nhap();
	cout << "Nhap SoGamShow tham gia: ";
	cin >> SoGameShow;
}
long CaSiNT::TinhLuong()
{
	Luong= 5000000 + 50000 * SoNamLamViec + 1200 * SoDiaBanDuoc + 500000 * SoBuoiDienTG + 500000 * SoGameShow;
	return Luong;
}
void CaSiNT::Xuat()
{
	CaSi::Xuat();
	cout << "SoGAmeShow tham gia: " << SoGameShow<<endl;
}