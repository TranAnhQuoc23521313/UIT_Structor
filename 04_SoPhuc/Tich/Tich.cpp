#include <iostream>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
SOPHUC Tich(SOPHUC, SOPHUC);
void Xuat(SOPHUC);

int main()
{
	SOPHUC x, y;
	cout << "Nhap vao so phuc X: " << endl;
	Nhap(x);
	cout << "Nhap vao so phuc Y: " << endl;
	Nhap(y);
	SOPHUC Multiplied = Tich(x, y);
	cout << "X * Y = ";
	Xuat(Multiplied);
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

SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	temp.Ao = x.Thuc * y.Ao + x.Ao * y.Thuc;
	return temp;
}