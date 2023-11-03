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
int SoSanh(NGAY, NGAY);

int main()
{
	NGAY Day_1, Day_2;
	cout << "Nhap ngay thu 1: " << endl;
	Nhap(Day_1);
	cout << "Nhap ngay thu 2: " << endl;
	Nhap(Day_2);
	if (SoSanh(Day_1, Day_2) == -1)
		cout << "Ngay thu 1 < Ngay thu hai";
	if (SoSanh(Day_1, Day_2) == 1)
		cout << "Ngay thu 1 > Ngay thu hai";
	if (SoSanh(Day_1, Day_2) == 0)
		cout << "Ngay thu 1 = Ngay thu hai";
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

int SoSanh(NGAY x, NGAY y)
{
	if (x.Nam > y.Nam)
		return 1;
	if (x.Nam < y.Nam)
		return -1;
	if (x.Thang > y.Thang)
		return 1;
	if (x.Thang < y.Thang)
		return -1;
	if (x.Ngay > y.Ngay)
		return 1;
	if (x.Ngay < y.Ngay)
		return -1;
	return 0;
}