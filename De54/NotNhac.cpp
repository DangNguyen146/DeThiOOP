#include "NotNhac.h"
void NotNhac::Nhap()
{
	cout << "Nhap Cao do:" << endl;
	cout << "1/Do(C)\t2/Re(D)\t3/Mi(E)\t4/Fa(F)\t5/Sol(G)\t6/La(A)\t7/Si(B)" << endl;
	cin >> this->CaoDo;
	KiHieu::Nhap();
}
string NotNhac::LayCaoDo()
{
	return this->CaoDo;
}