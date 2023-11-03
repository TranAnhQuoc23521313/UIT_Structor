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
void Xuat(NGAY);

int main()
{
	NGAY Day;
	cout << "Nhap vao ngay: " << endl;
	Nhap(Day);
	cout << "Ngay: ";
	Xuat(Day);
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

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.Ngay;
	cout << "\nThang: " << x.Thang;
	cout << "\nNam: " << x.Nam << endl;
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}