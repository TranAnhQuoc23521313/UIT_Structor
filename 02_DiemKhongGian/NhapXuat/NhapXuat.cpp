#include <iostream>

using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P;
	cout << "Nhap vao toa do diem P: " << endl;
	Nhap(P);
	cout << "Toa do cua diem P: ";
	Xuat(P);
	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap vao X: ";
	cin >> P.x;
	cout << "Nhap vao Y: ";
	cin >> P.y;
	cout << "Nhap vao Z: ";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << "\n X = " << P.x;
	cout << "\n Y = " << P.y;
	cout << "\n Z = " << P.z << endl;
	cout << "(" << P.x << "," << P.y << "," << P.z << ")";
}