#include <iostream>

using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void RutGon(HONSO&);
void Xuat(HONSO);
int UCLN(int, int);

int main()
{
	HONSO x;
	cout << "Nhap vao hon so X: " << endl;
	Nhap(x);
	cout << "Hon so X sau khi rut gon: " << endl;
	RutGon(x);
	Xuat(x);
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "Nhap phan nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << x.Nguyen << "(" << x.Tu << "/" << x.Mau << ")";
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

void RutGon(HONSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
	x.Nguyen += x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}