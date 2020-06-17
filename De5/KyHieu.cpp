#include "KyHieu.h"
void KyHieu::Nhap()
{
	int t;
	cout << "Nhap gia tri truong do:";
	cout << "1.Tron 2.Trang 3.Den 4.Moc don";
	cout << "5.Moc kep 6.Moc tam 7.Moc tu";
	cin >> t;
	switch (t)
	{
	case 1: TruongDo = 4;
		break;
	case 2: TruongDo = 2;
		break;
	case 3: TruongDo = 1;
		break;
	case 4: TruongDo = 0.5;
		break;
	case 5: TruongDo = 0.25;
		break;
	case 6: TruongDo = 0.125;
		break;
	case 7: TruongDo = 0.0625;
		break;
	}
}
bool KyHieu::LaDauLangDen()
{
	return false;
}
