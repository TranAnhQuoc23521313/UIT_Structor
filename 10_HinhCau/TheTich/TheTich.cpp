#include <iostream>

using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

struct HinhCau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct HinhCau HINHCAU;

void Nhap(HINHCAU&);
void Nhap(DIEMKHONGGIAN&);
float TheTich(HINHCAU);

int main()
{
	HINHCAU C;
	cout << "Nhap vao hinh cau (C): " << endl;
	Nhap(C);
	cout << "The Tich cua hinh cau (C) la V = " << TheTich(C);
	return 0;
}

void Nhap(HINHCAU& C)
{
	cout << "Nhap Tam: " << endl;
	Nhap(C.I);
	cout << "Nhap ban kinh: ";
	cin >> C.R;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

float TheTich(HINHCAU C)
{
	return 4 * 3.14 * C.R * C.R * C.R / 3;
}