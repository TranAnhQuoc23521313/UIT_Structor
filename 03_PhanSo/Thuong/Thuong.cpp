#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
PHANSO Thuong(PHANSO, PHANSO);
void Xuat(PHANSO);

int main()
{
	PHANSO X, Y;
	cout << "Nhap vao phan so X: " << endl;
	Nhap(X);
	cout << "Nhap vao phan so Y: " << endl;
	Nhap(Y);
	cout << "X / Y = ";
	PHANSO Divided = Thuong(X, Y);
	Xuat(Divided);
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

PHANSO Thuong(PHANSO X, PHANSO Y)
{
	PHANSO temp;
	temp.Tu = X.Tu * Y.Mau;
	temp.Mau = X.Mau * Y.Tu;
	return temp;
}
