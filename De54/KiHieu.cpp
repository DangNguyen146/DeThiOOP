#include "KiHieu.h"
void KiHieu::Nhap()
{
	int t;
	cout << "Nhap Truong do: " << endl;
	cout << "1/Not Den\t2/Not Moc don\t3/Not Tron\t4/Not Moc doi\t5/Not Moc tam\t6/Not Trang\t7/Not Moc tu" << endl;
	cin >> t;
	switch (t)
	{
	case 1:
		this->TruongDo = 1;
		break;
	case 2:
		this->TruongDo = 0.5;
		break;
	case 3:
		this->TruongDo = 4;
		break;
	case 4:
		this->TruongDo = 0.25;
		break;
	case 5:
		this->TruongDo = 0.125;
		break;
	case 6:
		this->TruongDo = 2;
		break;
	case 7:
		this->TruongDo = 0.0625;
		break;
	}
}
bool KiHieu::LaDauLangDen()
{
	return false;
}
