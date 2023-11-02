#include <iostream>
#include <cmath>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
SOPHUC Thuong(SOPHUC, SOPHUC);
void Xuat(SOPHUC);

int main()
{
	SOPHUC x, y;
	cout << "Nhap vao so phuc X: " << endl;
	Nhap(x);
	cout << "Nhap vao so phuc Y: " << endl;
	Nhap(y);
	SOPHUC Divided = Thuong(x, y);
	cout << "X / Y = ";
	Xuat(Divided);
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << x.Thuc << " + " << x.Ao << "i";
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo = " << x.Ao;
}

SOPHUC Thuong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	float mc = (pow(y.Thuc, 2) + pow(y.Ao, 2));
	temp.Thuc = (x.Thuc * y.Thuc + x.Ao * y.Ao) / mc;
	temp.Ao = (x.Ao * y.Thuc - x.Thuc * y.Ao) / mc;
	return temp;
}