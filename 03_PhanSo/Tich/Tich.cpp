#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
PHANSO Tich(PHANSO, PHANSO);
void Xuat(PHANSO);

int main()
{
	PHANSO X, Y;
	cout << "Nhap vao phan so X: " << endl;
	Nhap(X);
	cout << "Nhap vao phan so Y: " << endl;
	Nhap(Y);
	cout << "X * Y = ";
	PHANSO Multiplied = Tich(X, Y);
	Xuat(Multiplied);
	return 0;
}

void Nhap(PHANSO& X)
{
	cout << "Nhap Tu: ";
	cin >> X.Tu;
	cout << "Nhap Mau: ";
	cin >> X.Mau;
}

void Xuat(PHANSO X)
{
	cout << X.Tu << "/" << X.Mau;
}

PHANSO Tich(PHANSO X, PHANSO Y)
{
	PHANSO temp;
	temp.Tu = X.Tu * Y.Tu;
	temp.Mau = X.Mau * Y.Mau;
	return temp;
}
