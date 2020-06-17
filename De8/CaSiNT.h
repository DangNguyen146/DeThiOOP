#include<iostream>
#include<string>
#include"CaSi.h"
using namespace std;
#pragma once
class CaSiNT:public CaSi
{
protected:
	int SoGameShow;
public:
	void Nhap();
	void Xuat();
	long TinhLuong();
};

