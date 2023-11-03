#include <iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct TamGiac TAMGIAC;

void Nhap(DIEM&);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);
void Xuat(DIEM);

int main()
{
	TAMGIAC t;
	cout << "Nhap vao tam giac ABC: " << endl;
	Nhap(t);
	cout << "Tam giac ABC co toa do 3 dinh la: ";
	Xuat(t);
	return 0;
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap A: " << endl;
	Nhap(t.A);
	cout << "Nhap B: " << endl;
	Nhap(t.B);
	cout << "Nhap C: " << endl;
	Nhap(t.C);
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
//	cout << "(" << P.x << "," << P.y << ")";
}

void Xuat(TAMGIAC t)
{
	cout << "\n A: ";
	Xuat(t.A);
	cout << "\n B: ";
	Xuat(t.B);
	cout << "\n C: ";
	Xuat(t.C);
}