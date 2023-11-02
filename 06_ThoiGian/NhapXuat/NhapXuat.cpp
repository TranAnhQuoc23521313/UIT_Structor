#include <iostream>
#include <iomanip>

using namespace std;

struct ThoiGian
{
    int Gio;
    int Phut;
    int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);

int main()
{
    THOIGIAN time;
    cout << "Nhap thoi gian: " << endl;
    Nhap(time);
    cout << "Thoi gian: " << endl;
    Xuat(time);
    return 0;
}

void Nhap(THOIGIAN& x)
{
    cout << "Nhap gio: ";
    cin >> x.Gio;
    cout << "Nhap phut: ";
    cin >> x.Phut;
    cout << "Nhap giay: ";
    cin >> x.Giay;
}

void Xuat(THOIGIAN x)
{
    cout << setw(6);
    cout << "\n Gio = " << x.Gio;
    cout << "\n Phut = " << x.Phut;
    cout << "\n Giay = " << x.Giay;
}