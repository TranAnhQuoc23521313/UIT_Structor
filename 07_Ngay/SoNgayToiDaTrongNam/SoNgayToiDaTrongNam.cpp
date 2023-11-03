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
int SoNgayToiDaTrongNam(NGAY x);
int KtNhuan(NGAY);

int main()
{
	NGAY Day;
	Nhap(Day);
	int songaytoida = SoNgayToiDaTrongNam(Day);
	cout << "Nam " << Day.Nam << " co toi da " << songaytoida << " ngay";
	return 0;
}

void Nhap(NGAY& x)
{
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