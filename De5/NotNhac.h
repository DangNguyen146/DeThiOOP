#include<iostream>
#include"KyHieu.h"
#pragma once
class NotNhac:public KyHieu
{
protected:
	int CaoDo;
public:
	void Nhap();
	int LayCaoDo();
};

