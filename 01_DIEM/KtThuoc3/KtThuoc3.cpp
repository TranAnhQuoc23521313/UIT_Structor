#include <iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
int KtThuoc3(DIEM);

int main()
{
	DIEM P;
	cout << "Nhap vao toa do diem P: " << endl;
	Nhap(P);
	if (KtThuoc3(P) == 1)
		cout << "Diem P thuoc goc phan tu thu ba";
	else
		cout << "Diem P khong thuoc goc phan tu thu ba";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap vao X:";
	cin >> P.x;
	cout << "Nhap vao Y:";
	cin >> P.y;
}

int KtThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return 1;
	return 0;
}
