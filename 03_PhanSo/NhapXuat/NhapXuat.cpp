#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

int main()
{
	PHANSO A;
	cout << "Nhap vao Phan so A: " << endl;
	Nhap(A);
	cout << "Phan so A = ";
	Xuat(A);
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
	cout << "\n Tu = " << x.Tu;
	cout << "\n Mau = " << x.Mau;
}