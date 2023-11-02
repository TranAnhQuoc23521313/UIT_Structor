#include <iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
DIEM DoiXungHoanh(DIEM);
void Xuat(DIEM);
int main()
{
	DIEM P;
	cout << "Nhap vao diem P: " << endl;
	Nhap(P);
	cout << "Diem doi xung qua hoanh do cua P:";
	DIEM P_DX = DoiXungHoanh(P);
	Xuat(P_DX);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap vao X: ";
	cin >> P.x;
	cout << "Nhap vao Y: ";
	cin >> P.y;
}

DIEM DoiXungHoanh(DIEM P)
{
	DIEM temp;
	temp.x = P.x;
	temp.y = -P.y;
	return temp;
}

void Xuat(DIEM P)
{
	cout << "P_DX(" << P.x << "," << P.y << ")";
}