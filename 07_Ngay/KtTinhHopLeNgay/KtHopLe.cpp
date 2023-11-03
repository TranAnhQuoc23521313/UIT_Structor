#include <iostream>

using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
int ktHopLe(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int KtNhuan(NGAY);

int main()
{
	NGAY Day;
	Nhap(Day);
	if (ktHopLe(Day) == 1)
		cout << "Ngay hop le";
	else
		cout << "Ngay khong hop le";
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}

int KtNhuan(NGAY x)
{
	if (x.Nam % 4 == 0 && x.Nam % 100 != 0)
		return 1;
	if (x.Nam % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (KtNhuan(x) == 1)
		ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
}

int ktHopLe(NGAY x)
{
	if (x.Nam < 1)
		return 0;
	if (x.Thang < 1)
		return 0;
	if (x.Ngay > SoNgayToiDaTrongThang(x))
		return 0;
	return 1;
}