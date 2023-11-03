#include <iostream>

using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);
int SoThuTu(THOIGIAN);

int main()
{
	THOIGIAN time;
	cout << "Nhap vao thoi gian: " << endl;
	Nhap(time);
	cout << "So thu giay giay tinh tu 00:00:00: " << SoThuTu(time);
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