#include <iostream>

using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&, float&);
float TinhGiaTri(DONTHUC, float);

int main()
{
	DONTHUC f;
	float x;
	cout << "Nhap vao f(x): " << endl;
	Nhap(f, x);
	float GiaTri = TinhGiaTri(f, x);
	cout << "Gia tri cua f(" << x << ") =" << GiaTri;
	return 0;
}

void Nhap(DONTHUC& f, float& x)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
	cout << "Nhap x: ";
	cin >> x;
}

float TinhGiaTri(DONTHUC f, float x)
{
	float temp = f.a;
	for (int i = 1; i <= f.n; i++)
		temp = temp * x;
	return temp;
}
