#include"KiHieu.h"
#include<iostream>
#include<string>
using namespace std;
#pragma once
class NotNhac:public KiHieu
{
private:
	string CaoDo;
public:
	void Nhap();
	string LayCaoDo();
};

