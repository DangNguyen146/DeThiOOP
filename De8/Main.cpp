#include<iostream>
#include"CaSi.h"
#include"CaSiCNT.h"
#include"CaSiNT.h"
using namespace std;
int main()
{
	system("color b");
	int n;
	cin >> n;
	CaSi* cs[100];
	for (int i = 0; i < n; i++)
	{
		cout << "1/CaSiNT 2/CaSiCNT: ";
		int test;
		cin >> test;
		cin.ignore();
		switch (test)
		{
		case 1:
			cs[i] = new CaSiNT();
			break;
		case 2:
			cs[i] = new CaSiCNT();
			break;
		}
		cs[i]->Nhap();
	}
	int max=0;
	for (int i = 0; i < n; i++)
	{
		cs[i]->TinhLuong();
		if (cs[i]->TinhLuong() > cs[max]->TinhLuong())
			max = i;
	}
	for (int i = 0; i < n; i++)
		cs[i]->Xuat();
	cout << "Ca Si co muc luong cao nhat:" << endl;
	cs[max]->Xuat();
}