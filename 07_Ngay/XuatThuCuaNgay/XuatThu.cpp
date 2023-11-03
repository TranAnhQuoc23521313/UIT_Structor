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
int KtNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoThuTu(NGAY);
int SoThuTuTrongNam(NGAY);
void XuatThu(NGAY);
void Xuat(NGAY);

int main()
{
	NGAY Day;
	Nhap(Day);
	Xuat(Day);
	cout << " la ngay thu ";
	XuatThu(Day);
	return 0;
}

void Xuat(NGAY x)
{
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
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

int SoNgayToiDaTrongNam(NGAY x)
{
	if (KtNhuan(x) == 1)
		return 366;
	return 365;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (KtNhuan(x) == 1)
		ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Thang - 1; i++)
	{
		NGAY temp = { 1,i,x.Nam };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ngay);
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nam - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt += SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}

void XuatThu(NGAY x)
{
	int stt = SoThuTu(x);
	switch (stt % 7)
	{
	case 0: cout << "Chu Nhat"; break;
	case 1: cout << "Thu Hai"; break;
	case 2: cout << "Thu Ba"; break;
	case 3: cout << "Thu Tu"; break;
	case 4: cout << "Thu Nam"; break;
	case 5: cout << "Thu Sau"; break;
	case 6: cout << "Thu Bay"; break;
	}
}