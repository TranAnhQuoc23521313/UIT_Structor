#include <iostream>

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
void Xuat(DUONGTRON);
void Xuat(DIEM);

int main()
{
	DUONGTRON C;
	cout << "Nhap vao (C): " << endl;
	Nhap(C);
	cout << "Duong tron (C): ";
	Xuat(C);
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

void Xuat(DIEM I)
{
	cout << "\nx = " << I.x;
	cout << "\ny = " << I.y;
}

void Xuat(DUONGTRON C)
{
	cout << "\nTam: ";
	Xuat(C.I);
	cout << "\nBan kinh: " << C.R;
}