#include <iostream>
#include <cmath>

using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);
int KhoangCach(THOIGIAN, THOIGIAN);
int SoThuTu(THOIGIAN);

int main()
{
	THOIGIAN time_1, time_2;
	cout << "Nhap vao thoi gian thu nhat: " << endl;
	Nhap(time_1);
	cout << "Nhap vao thoi gian thu hai: " << endl;
	Nhap(time_2);
	int kc = KhoangCach(time_1, time_2);
	cout << "Khoang cach giua hai thoi gian la: " << kc;
	return 0;
}

void Nhap(THOIGIAN& x)
{
	cout << "Nhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}

int SoThuTu(THOIGIAN x)
{
	return x.Gio * 3600 + x.Phut * 60 + x.Giay;
}

int KhoangCach(THOIGIAN x, THOIGIAN y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a-b);
}