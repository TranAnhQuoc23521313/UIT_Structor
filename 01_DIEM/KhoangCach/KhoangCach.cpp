#include <iostream>
#include <cmath>

using namespace std;

struct Diem
{
	float x;
	float y;
};

typedef struct Diem DIEM;

void Nhap(DIEM&);
float KhoangCach(DIEM, DIEM);

int main()
{
	DIEM P, Q;
	cout << "Nhap vao toa do diem P: " << endl;
	Nhap(P);
	cout << "Nhap vao toa do diem Q: " << endl;
	Nhap(Q);
	cout << "Khoang cach giua hai diem P va Q la: " << KhoangCach(P, Q);
	return 0;
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
	return sqrt(pow(Q.x - P.x, 2) + pow(Q.y - P.y, 2));
}