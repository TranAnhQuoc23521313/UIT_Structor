#include <iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

int main()
{
	DIEM P;
	cout << "Nhap vao toa do diem P: " << endl;
	Nhap(P);
	cout << "Toa do cua diem P: ";
	Xuat(P);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap vao X: ";
	cin >> P.x;
	cout << "Nhap vao Y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\n x = " << P.x;
	cout << "\n y = " << P.y << endl;
	cout << "P(" << P.x << "," << P.y << ")";
}