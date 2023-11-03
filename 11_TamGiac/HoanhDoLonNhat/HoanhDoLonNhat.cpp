#include <iostream>
#include <cmath>

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

void Nhap(TAMGIAC&);
void Nhap(DIEM&);
DIEM HoanhLonNhat(TAMGIAC);
void Xuat(DIEM);

int main()
{
	TAMGIAC t;
	cout << "Nhap vao tam giac ABC: " << endl;
	Nhap(t);
	DIEM M = HoanhLonNhat(t);
	cout << "Toa do cua diem co hoanh do lon nhat la ";
	Xuat(M);
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
	cout << "(" << P.x << "," << P.y << ")";
}

DIEM HoanhLonNhat(TAMGIAC t)
{
	DIEM lc = t.A;
	if (t.B.x > lc.x)
		lc = t.B;
	if (t.C.x > lc.x)
		lc = t.C;
	return lc;
}