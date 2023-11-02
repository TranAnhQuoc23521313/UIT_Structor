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
DIEMKHONGGIAN DoiXungGoc(DIEMKHONGGIAN);
void Xuat(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P;
	cout << "Nhap vao toa do diem P: " << endl;
	Nhap(P);
	cout << "Diem doi xung qua goc toa do cua P: P_DX";
	DIEMKHONGGIAN P_DX = DoiXungGoc(P);
	Xuat(P_DX);
	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap vap X: ";
	cin >> P.x;
	cout << "Nhap vao Y: ";
	cin >> P.y;
	cout << "Nhap vao Z: ";
	cin >> P.z;
}

DIEMKHONGGIAN DoiXungGoc(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = -P.x;
	temp.y = -P.y;
	temp.z = -P.z;
	return temp;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << "(" << P.x << "," << P.y << "," << P.z << ")";
}