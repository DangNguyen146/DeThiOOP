#include<iostream>
using namespace std;
#pragma once
class KyHieu
{
protected:
	float TruongDo;
public:
	virtual void Nhap();
	virtual int LayCaoDo()=0;
	virtual bool LaDauLangDen();
};

