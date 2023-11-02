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
float KhoangCachX(DIEM, DIEM);

int main()
{
	DIEM P, Q;
	cout << "Nhap vao toa do diem P: " << endl;
	Nhap(P);
	cout << "Nhap vao toa do diem Q: " << endl;
	Nhap(Q);
	cout << "Khoang cach theo phuong Ox giua P va Q: " << KhoangCachX(P, Q);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap vao X: ";
	cin >> P.x;
	cout << "Nhap vap Y: ";
	cin >> P.y;
}

float KhoangCachX(DIEM P, DIEM Q)
{
	return abs(Q.x - P.x);
}