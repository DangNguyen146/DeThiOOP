#include<iostream>
#include<string>
using namespace std;
#pragma once
class CaSi
{
protected:
	string HoTen;
	int SoNamLamViec;
	int SoDiaBanDuoc;
	int SoBuoiDienTG;
	long Luong=0;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual long TinhLuong();
};

