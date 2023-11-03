#include <iostream>

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

void Nhap(DIEM&);
void Nhap(DUONGTHANG&);
int KtThuoc(DUONGTHANG, DIEM);

int main()
{
	DIEM P;
	DUONGTHANG d;
	cout << "Nhap vao diem P:" << endl;
	Nhap(P);
	cout << "Nhap vao duong thang d: " << endl;
	Nhap(d);
	if (KtThuoc(d, P) == 1)
		cout << "P thuoc d";
	else
		cout << "P khong thuoc d";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap vao X: ";
	cin >> P.x;
	cout << "Nhap vao Y: ";
	cin >> P.y;
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

int KtThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1; // P thuoc d
	return 0;
}