#include <iostream>

using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(int&);
NGAY TimNgay(int);
int SoNgayToiDaTrongNam(NGAY);
int KtNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
NGAY TimNgay(int, int);
void Xuat(NGAY);

int main()
{
	int stt;
	Nhap(stt);
	NGAY DAY = TimNgay(stt);
	Xuat(DAY);
	return 0;
}

void Xuat(NGAY x)
{
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}

void Nhap(int& stt)
{
	cout << "Nhap so thu tu: ";
	cin >> stt;
}

NGAY TimNgay(int stt)
{
	int Nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt -= sn;
		Nam++;
		NGAY temp = { 1,1,Nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(Nam, stt);
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (KtNhuan(x) == 1)
		return 366;
	return 365;
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

NGAY TimNgay(int Nam, int stt)
{
	NGAY temp = { 1,1,Nam };
	temp.Thang = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt -= SoNgayToiDaTrongThang(temp);
		temp.Thang++;
	}
	temp.Ngay = stt;
	return temp;
}