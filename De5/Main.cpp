#include<iostream>
#include"KyHieu.h"
#include"DauLang.h"
#include"NotNhac.h"
using namespace std;
void main()
{
	KyHieu* BanNhac[50];
	int n;
	//cau 1. Soan ban nhac
	cout << "Nhap vao so luong cac ky hieu am nhac";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int t;
		cout << "Chon 1 de soan not nhac";
		cout << " va 2 de soan dau lang";
		cin >> t;
		switch (t)
		{
		case 1: BanNhac[i] = new NotNhac();
			break;
		case 2: BanNhac[i] = new DauLang();
			break;
		}
		BanNhac[i]->Nhap();
	}

	//cau 2. Dem dau lang den
	int count = 0;
	for (int i = 0; i < n; i++)
		if (BanNhac[i]->LaDauLangDen() == true)
			count++;
	cout << "So dau lang den la" << count;

	//cau 3.Tim not nhac co cao do cao nhat
	int max = BanNhac[0]->LayCaoDo();
	int vt = 0;
	for (int i = 1; i < n; i++)
		if (BanNhac[i]->LayCaoDo() > max)
		{
			max = BanNhac[i]->LayCaoDo();
			vt = i;
		}
	cout << "Vi tri not nhac co cao do cao nhat" << vt;
}
