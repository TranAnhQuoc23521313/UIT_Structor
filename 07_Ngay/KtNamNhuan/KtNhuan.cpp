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

int main()
{
	NGAY Day;
	Nhap(Day);
	if (KtNhuan(Day) == 1)
		cout << "Nam nhuan";
	if (KtNhuan(Day) == 0)
		cout << "Nam khong nhuan";
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