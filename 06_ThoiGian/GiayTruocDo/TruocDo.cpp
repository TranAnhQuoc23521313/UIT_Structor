#include <iostream>
#include <iomanip>

using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);
THOIGIAN TruocDo(THOIGIAN);
void Xuat(THOIGIAN);

int main()
{
	THOIGIAN time;
	cout << "Nhap vao thoi gian: " << endl;
	Nhap(time);
	THOIGIAN Previous_Time = TruocDo(time);
	cout << "Thoi gian o giay truoc do la: " << endl;
	Xuat(Previous_Time);
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

THOIGIAN TruocDo(THOIGIAN x)
{
	x.Giay--;
	if (x.Giay < 0)
	{
		x.Phut--;
		if (x.Phut < 0)
		{
			x.Gio--;
			if (x.Gio < 0)
				x.Gio = 23;
			x.Phut = 59;
		}
		x.Giay = 59;
	}
	return x;
}

void Xuat(THOIGIAN x)
{
	cout << setw(6);
	cout << "\n Gio = " << x.Gio;
	cout << "\n Phut = " << x.Phut;
	cout << "\n Giay = " << x.Giay;
}