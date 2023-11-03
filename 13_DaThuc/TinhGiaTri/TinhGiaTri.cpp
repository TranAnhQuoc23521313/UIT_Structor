#include <iostream>

using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
float TinhGiaTri(DATHUC, float);

int main()
{
	DATHUC f;
	float x;
	cout << "Nhap X = ";
	cin >> x;
	cout << "Nhap f(x):" << endl;
	Nhap(f);
	float GiaTri = TinhGiaTri(f, x);
	cout << "Gia tri cua f(" << x << ") = " << GiaTri;
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}

float TinhGiaTri(DATHUC f, float x)
{
	float s = f.a[0];
	float t = 1;
	for (int i = 1; i <= f.n; i++)
	{
		t = t * x;
		s += f.a[i] * t;
	}
	return s;
}