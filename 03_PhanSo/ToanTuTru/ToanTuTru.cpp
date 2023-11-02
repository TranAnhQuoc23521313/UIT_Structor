#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
PHANSO operator-(PHANSO, PHANSO);
void Xuat(PHANSO);

int main()
{
	PHANSO x, y;
	cout << "Nhap vao phan so X: " << endl;
	Nhap(x);
	cout << "Nhap vao phan so Y: " << endl;
	Nhap(y);
	PHANSO Minus = x - y;
	cout << "X - Y = ";
	Xuat(Minus);
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
	cin >> x.Mau;
}

PHANSO operator-(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	return temp;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
}