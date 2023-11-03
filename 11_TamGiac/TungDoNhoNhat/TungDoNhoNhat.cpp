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
void Xuat(DIEM);
DIEM TungNhoNhat(TAMGIAC);

int main()
{
	TAMGIAC t;
	cout << "Nhap vao tam giac ABC: " << endl;
	Nhap(t);
	DIEM M = TungNhoNhat(t);
	cout << "Toa do cua diem co tung do nho nhat la ";
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

DIEM TungNhoNhat(TAMGIAC t)
{
	DIEM lc = t.A;
	if (t.B.y < lc.y)
		lc = t.B;
	if (t.C.y < lc.y)
		lc = t.C;
	return lc;
}