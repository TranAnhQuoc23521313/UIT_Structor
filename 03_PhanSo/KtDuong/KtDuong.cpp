#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
int KtDuong(PHANSO);

int main()
{
	PHANSO x;
	cout << "Nhap phan so X: " << endl;
	Nhap(x);
	if (KtDuong(x) == 1)
		cout << "Phan so nay duong";
	else
		cout << "Phan so nay khong duong";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
	cin >> x.Mau;
}

int KtDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return 1;
	return 0;
}