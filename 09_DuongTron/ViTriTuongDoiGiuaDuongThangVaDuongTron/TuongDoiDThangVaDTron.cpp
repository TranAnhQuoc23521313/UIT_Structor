#include <iostream>
#include <cmath>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTRON&);
void Nhap(DUONGTHANG&);
void Nhap(DIEM&);
int TuongDoi(DUONGTRON, DUONGTHANG);
float KhoangCach(DUONGTHANG,DIEM);

int main()
{
	DUONGTRON C;
	DUONGTHANG D;
	cout << "Nhap vao (C): " << endl;
	Nhap(C);
	cout << "Nhap duong thang (d): " << endl;
	Nhap(D);
	if (TuongDoi(C, D) == 0)
		cout << "D khong cat (C)";
	if (TuongDoi(C, D) == 1)
		cout << "D tiep xuc (C)";
	if (TuongDoi(C, D) == 2)
		cout << "P cat (C) tai hai diem";
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap A = ";
	cin >> d.a;
	cout << "Nhap B = ";
	cin >> d.b;
	cout << "Nhap C = ";
	cin >> d.c;
}

void Nhap(DUONGTRON& C)
{
	cout << "Nhap vao tam: " << endl;
	Nhap(C.I);
	cout << "Nhap vao ban kinh R: ";
	cin >> C.R;
}

void Nhap(DIEM& I)
{
	cout << "Nhap X = ";
	cin >> I.x;
	cout << "Nhap Y = ";
	cin >> I.y;
}

float KhoangCach(DUONGTHANG D,DIEM P)
{
	float tu = abs(D.a * P.x + D.b * P.y + D.c);
	float mau = sqrt(D.a * D.a + D.b * D.b);
	return tu / mau;
}

int TuongDoi(DUONGTRON C, DUONGTHANG D)
{
	float kc = KhoangCach(D,C.I);
	if (kc > C.R)
		return 0;  // D khong cat C
	if (kc == C.R)
		return 1;  // D tiep xuc C
	return 2;  // D cat C tai 2 diem
}