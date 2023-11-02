#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
int UCLN(int, int);
int KtToiGian_1(PHANSO);
bool KtToiGian_2(PHANSO);
bool KtToiGian_3(PHANSO);

int main()
{
	PHANSO x;
	cout << "Nhap vao phan so X: " << endl;
	Nhap(x);
	if (KtToiGian_1(x) == 1)
		cout << "Phan so nay da toi gian";
	else
		cout << "Phan so nay chua toi gian";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap Tu: ";
	cin >> x.Tu;
	cout << "Nhap Mau: ";
	cin >> x.Mau;
}

int UCLN(int x, int y)
{
	int a = x;
	int b = y;
	while (a * b != 0)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a + b;
}

int KtToiGian_1(PHANSO x)
{
	int kq = UCLN(x.Tu, x.Mau);
	if (kq == 1)
		return 1;
	return 0;
}

bool KtToiGian_2(PHANSO x)
{
	int kq = UCLN(x.Tu, x.Mau);
	if (kq == 1)
		return true;
	return false;
}

bool KtToiGian_3(PHANSO x)
{
	int kq = UCLN(x.Tu, x.Mau);
	return (kq == 1);
}