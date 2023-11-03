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

void Nhap(DUONGTRON&);
void Nhap(DIEM&);
int TuongDoi(DUONGTRON, DIEM);
float KhoangCach(DIEM, DIEM);

int main()
{
	DUONGTRON C;
	DIEM P;
	cout << "Nhap vao (C): " << endl;
	Nhap(C);
	cout << "Nhap vao diem P: " << endl;
	Nhap(P);
	if (TuongDoi(C, P) == 0)
		cout << "P nam trong (C)";
	if (TuongDoi(C, P) == 1)
		cout << "P nam tren (C)";
	if (TuongDoi(C, P) == 2)
		cout << "P nam ngoai (C)";
	return 0;
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

float KhoangCach(DIEM I, DIEM P)
{
	return sqrt(pow(I.x - P.x, 2) + pow(I.y - P.y, 2));
}

int TuongDoi(DUONGTRON C, DIEM P)
{
	float kc = KhoangCach(C.I, P);
	if (kc < C.R)
		return 0;
	if (kc == C.R)
		return 1;
	return 2;
}