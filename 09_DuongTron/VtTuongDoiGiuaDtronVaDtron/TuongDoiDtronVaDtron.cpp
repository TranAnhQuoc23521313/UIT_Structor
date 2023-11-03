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
int TuongDoi(DUONGTRON, DUONGTRON);
float KhoangCach(DIEM, DIEM);

int main()
{
	DUONGTRON C_1,C_2;
	cout << "Nhap vao (C1): " << endl;
	Nhap(C_1);
	cout << "Nhap vao (C2): " << endl;
	Nhap(C_2);
	if (TuongDoi(C_1, C_2) == 0)
		cout << "Trung nhau";
	if (TuongDoi(C_1, C_2) == 1)
		cout << "Roi nhau";
	if (TuongDoi(C_1, C_2) == 2)
		cout << "Tiep xuc ngoai";
	if (TuongDoi(C_1, C_2) == 3)
		cout << "Cat nhau";
	if (TuongDoi(C_1, C_2) == 4)
		cout << "Tiep xuc trong";
	if (TuongDoi(C_1, C_2) == 5)
		cout << "Chua trong nhau";
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

int TuongDoi(DUONGTRON C1, DUONGTRON C2)
{
	float kc = KhoangCach(C1.I, C2.I);
	if (kc == 0 && C1.R == C2.R)
		return 0;
	if (kc > C1.R + C2.R)
		return 1;
	if (kc == C1.R + C2.R)
		return 2;
	if (kc < C1.R + C2.R && kc > abs(C1.R - C2.R))
		return 3;
	if (kc == abs(C1.R - C2.R))
		return 4;
	return 5;
}