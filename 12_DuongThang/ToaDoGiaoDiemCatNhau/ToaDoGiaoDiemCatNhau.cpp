#include <iostream>
#include <cmath>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DIEM);
DIEM GiaoDiem(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG d1, d2;
	cout << "Nhap vao duong thang d1: " << endl;
	Nhap(d1);
	cout << "Nhap vao duong thand d2: " << endl;
	Nhap(d2);
	cout << "Toa do giao diem cua d1 va d2: ";
	DIEM P = GiaoDiem(d1, d2);
	Xuat(P);
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DIEM P)
{
	cout << "P(" << P.x << "," << P.y << ")";
}

DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	float Dy = -d1.a * d2.c + d2.a * d1.c;
	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}