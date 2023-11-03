#include <iostream>

using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
DONTHUC DaoHam(DONTHUC);
void Xuat(DONTHUC);

int main()
{
	DONTHUC f;
	cout << "Nhap vao f(x): " << endl;
	Nhap(f);
	cout << "Dao ham cap 1 cua f(x) la ";
	DONTHUC f_1 = DaoHam(f);
	Xuat(f_1);
	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

DONTHUC DaoHam(DONTHUC f)
{
	if (f.n == 0)
	{
		DONTHUC temp = { 0,0 };
		return temp;
	}
	DONTHUC temp;
	temp.a = f.a * f.n;
	temp.n = f.n - 1;
	return temp;
}

void Xuat(DONTHUC f)
{
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
}