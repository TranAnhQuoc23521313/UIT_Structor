#include <iostream>

using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
int KtToiGian(HONSO);
int UCLN(int, int);

int main()
{
	HONSO x;
	cout << "Nhap vao hon so X: " << endl;
	Nhap(x);
	if (KtToiGian(x) == 1)
		cout << "Hon so nay da toi gian";
	else
		cout << "Hon so nay chua toi gian";
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "Nhap phan nguyen: ";
	cin >> x.Nguyen;
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

int KtToiGian(HONSO x)
{
	int kq = UCLN(x.Tu, x.Mau);
	if (kq == 1 && x.Tu / x.Mau == 0)
		return 1;
	return 0;
}