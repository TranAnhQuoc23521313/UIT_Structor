#include <iostream>

using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
DONTHUC Tich(DONTHUC,DONTHUC);
void Xuat(DONTHUC);

int main()
{
	DONTHUC f_x, g_x;
	cout << "Nhap vao f(x): " << endl;
	Nhap(f_x);
	cout << "Nhap vao g(x): " << endl;
	Nhap(g_x);
	DONTHUC Multiplied = Tich(f_x, g_x);
	cout << "f(x) * g(x) = ";
	Xuat(Multiplied);
	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

DONTHUC Tich(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a * g.a;
	temp.n = f.n + g.n;
	return temp;
}

void Xuat(DONTHUC f)
{
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
}