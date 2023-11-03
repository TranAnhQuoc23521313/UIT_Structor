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
float KhoangCach(DIEM, DIEM);
int KiemTra(TAMGIAC);

int main()
{
	TAMGIAC t;
	cout << "Nhap vao tam giac ABC: " << endl;
	Nhap(t);
	if (KiemTra(t) == 1)
		cout << "3 dinh A,B,C tao thanh 1 tam giac";
	else
		cout << "3 dinh A,B,C khong tao thanh 1 tam giac";
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

int KiemTra(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	if (a + b > c && a + c > b && b + c > a)
		return 1;    // La mot tam giac
	return 0;  // Khong la mot tam giac
}