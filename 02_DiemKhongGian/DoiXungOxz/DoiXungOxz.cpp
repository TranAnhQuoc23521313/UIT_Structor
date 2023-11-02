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
DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN);
void Xuat(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P;
	cout << "Nhap vao toa do diem P: " << endl;
	Nhap(P);
	cout << "Diem doi xung qua Oxz cua P: P_DX";
	DIEMKHONGGIAN P_DX = DoiXungOxz(P);
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

DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = -P.y;
	temp.z = P.z;
	return temp;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << "(" << P.x << "," << P.y << "," << P.z << ")";
}