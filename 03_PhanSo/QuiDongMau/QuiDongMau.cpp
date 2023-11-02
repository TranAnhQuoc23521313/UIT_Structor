#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void QuiDongMau(PHANSO&, PHANSO&);
void Xuat(PHANSO);

int main()
{
	PHANSO x, y;
	cout << "Nhap vao phan so X: " << endl;
	Nhap(x);
	cout << "Nhap vao phan so Y: " << endl;
	Nhap(y);
	cout << "Hai phan so sau khi qui dong mau: " << endl;
	QuiDongMau(x, y);
	cout << "X = ";
	Xuat(x);
	cout << "Y = ";
	Xuat(y);
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
	cin >> x.Mau;
}

void QuiDongMau(PHANSO& x, PHANSO& y)
{
	int bc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = y.Tu * x.Mau;
	x.Mau = bc;
	y.Mau = bc;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau << endl;
}