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
THOIGIAN KeTiep(THOIGIAN);
void Xuat(THOIGIAN);

int main()
{
	THOIGIAN time;
	cout << "Nhap vao thoi gian: " << endl;
	Nhap(time);
	THOIGIAN Next_Time = KeTiep(time);
	cout << "Thoi gian o giay ke tiep la: " << endl;
	Xuat(Next_Time);
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

THOIGIAN KeTiep(THOIGIAN x)
{
	x.Giay++;
	if (x.Giay > 59)
	{
		x.Phut++;
		if (x.Phut > 59)
		{
			x.Gio++;
			if (x.Gio > 23)
				x.Gio = 0;
			x.Phut = 0;
		}
		x.Giay = 0;
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