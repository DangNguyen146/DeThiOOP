#include "CaSi.h"
void CaSi::Nhap()
{
	cout << "Nhap Ho ten Ca Sy: ";
	getline(cin, HoTen);
	cout << "Nhap So nam lam viec cong ty: ";
	cin >> SoNamLamViec;
	cout << "Nhap So dia ban duoc: ";
	cin >> SoDiaBanDuoc;
	cout << "Nhap So buoi bieu dien tham gia: ";
	cin >> SoBuoiDienTG;
}
void CaSi::Xuat()
{
	cout << "Ho Ten ca sy: " << HoTen << endl;
	cout << "So ngay lam o cong ty: " << SoNamLamViec<<endl;
	cout << "So dia ban duoc: " <<SoDiaBanDuoc <<endl;
	cout << "So Buoi bieu dien tham gia: " << SoBuoiDienTG << endl;
	cout << "Luong: " << Luong << endl;
}
long CaSi::TinhLuong()
{
	return Luong;
}