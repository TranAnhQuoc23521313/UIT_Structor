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
float KhoangCachY(DIEM, DIEM);

int main()
{
	DIEM P, Q;
	cout << "Nhap vao toa do diem P: " << endl;
	Nhap(P);
	cout << "Nhap vao toa do diem Q: " << endl;
	Nhap(Q);
	cout << "Khoang cach theo phuong Oy giua P va Q: " << KhoangCachY(P, Q);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap vao X: ";
	cin >> P.x;
	cout << "Nhap vap Y: ";
	cin >> P.y;
}

float KhoangCachY(DIEM P, DIEM Q)
{
	return abs(Q.y - P.y);
}