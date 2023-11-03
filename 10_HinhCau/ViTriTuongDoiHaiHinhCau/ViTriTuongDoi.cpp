#include <iostream>
#include <cmath>

using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

struct HinhCau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct HinhCau HINHCAU;

void Nhap(HINHCAU&);
void Nhap(DIEMKHONGGIAN&);
float KhoangCach(DIEMKHONGGIAN, DIEMKHONGGIAN);
int TuongDoi(HINHCAU, HINHCAU);

int main()
{
	HINHCAU C1;
	cout << "Nhap vao hinh cau (C1): " << endl;
	Nhap(C1);
	HINHCAU C2;
	cout << "Nhap vao hinh cau (C2): " << endl;
	Nhap(C2);
	cout << "C1 va C2 ";
	switch (TuongDoi(C1, C2))
	{
	case 0: cout << "Trung nhau"; break;
	case 1: cout << "Roi nhau"; break;
	case 2: cout << "Tiep xuc ngoai"; break;
	case 3: cout << "Cat nhau"; break;
	case 4: cout << "Tiep xuc trong"; break;
	case 5: cout << "Chua trong nhau"; break;
	}
	return 0;
}

void Nhap(HINHCAU& C)
{
	cout << "Nhap Tam: " << endl;
	Nhap(C.I);
	cout << "Nhap ban kinh: ";
	cin >> C.R;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	float kc = sqrt(pow(P.x - Q.x, 2) + pow(P.y - Q.y, 2) + pow(Q.z - P.z, 2));
	return kc;
}

int TuongDoi(HINHCAU C1, HINHCAU C2)
{
	float kc = KhoangCach(C1.I, C2.I);
	if (kc == 0 && C1.R == C2.R)
		return 0; // Trung nhau
	if (kc > C1.R + C2.R)
		return 1; // Roi nhau
	if (kc == C1.R + C2.R)
		return 2; // Tiep xuc ngoai
	if (kc < C1.R + C2.R && kc > abs(C1.R - C2.R))
		return 3;  // Cat nhau
	if (kc = abs(C1.R - C2.R))
		return 4;   // Tiep xuc trong
	return 5; // Chua trong nhau
}