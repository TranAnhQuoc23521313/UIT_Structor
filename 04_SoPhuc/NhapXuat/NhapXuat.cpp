#include <iostream>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

int main()
{
	SOPHUC z;
	cout << "Nhap vao so phuc Z:" << endl;
	Nhap(z);
	cout << "So phuc Z co: ";
	Xuat(z);
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
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo = " << x.Ao;
//	cout << "\nZ = " << x.Thuc << " + " << x.Ao << "i";
}