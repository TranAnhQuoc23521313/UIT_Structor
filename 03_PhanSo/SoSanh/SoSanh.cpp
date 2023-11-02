#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
int SoSanh(PHANSO, PHANSO);

int main()
{
	PHANSO x, y;
	cout << "Nhap vao phan so X: " << endl;
	Nhap(x);
	cout << "Nhap vao phan so Y: " << endl;
	Nhap(y);
	cout << SoSanh(x, y);
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
	cin >> x.Mau;
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

/*
Quy uoc:
1 tuc la a > b;
0 tuc la a = b;
-1 tuc la a < b;
*/