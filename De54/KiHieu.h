#include<iostream>
#include<string>
using namespace std;
#pragma once
class KiHieu
{
protected:
	float TruongDo;
public:
	virtual void Nhap();
	virtual string LayCaoDo();
	virtual bool LaDauLang();
};