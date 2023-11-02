#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
PHANSO Tong(PHANSO,PHANSO);
void Xuat(PHANSO);

int main()
{
	PHANSO X,Y;
	cout << "Nhap vao phan so X: " << endl;
	Nhap(X);
	cout << "Nhap vao phan so Y: " << endl;
	Nhap(Y);
	cout << "X + Y = ";
	PHANSO Plus = Tong(X, Y);
	Xuat(Plus);
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

PHANSO Tong(PHANSO X, PHANSO Y)
{
	PHANSO temp;
	temp.Tu = X.Tu * Y.Mau + Y.Tu * X.Mau;
	temp.Mau = X.Mau * Y.Mau;
	return temp;
}
