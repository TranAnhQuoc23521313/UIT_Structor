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

void Nhap(DIEM&);
void Nhap(TAMGIAC&);
float KhoangCach(DIEM, DIEM);
float TongKhoangCach(TAMGIAC, DIEM);

int main()
{
	DIEM P;
	TAMGIAC t;
	cout << "Nhap vao toa do diem P:" << endl;
	Nhap(P);
	cout << "Nhap vao toa do 3 dinh tam giac ABC:" << endl;
	Nhap(t);
	cout << "Tong khoang cach tu P den 3 dinh ABC la " << TongKhoangCach(t, P);
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

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow(P.x - Q.x, 2) + pow(P.y - Q.y, 2));
}

float TongKhoangCach(TAMGIAC t, DIEM P)
{
	float x = KhoangCach(P, t.A);
	float y = KhoangCach(P, t.B);
	float z = KhoangCach(P, t.C);
	return (x + y + z);
}