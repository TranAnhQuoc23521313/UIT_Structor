#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void RutGon(PHANSO&);
int UCLN(int, int);
void Xuat(PHANSO);

int main()
{
	PHANSO X;
	cout << "Nhap vao phan so X: " << endl;
	Nhap(X);
	cout << "Phan so truoc khi rut gon: X=";
	Xuat(X);
	cout << "\nPhan so sau khi rut gon: X=";
	RutGon(X);
	Xuat(X);
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

int UCLN(int x, int y)
{
	int a = x;
	int b = y;
	while (a * b != 0)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a + b;
}

void RutGon(PHANSO& X)
{
	int kq = UCLN(X.Tu, X.Mau);
	X.Tu = X.Tu / kq;
	X.Mau = X.Mau / kq;
}