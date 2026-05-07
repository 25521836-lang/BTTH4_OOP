#ifndef PHANSO_H
#define PHANSO_H

#include<iostream>
using namespace std;
class PhanSo
{
private:
    int tu,mau;
    void rutGon();
public:
    PhanSo(int t=0,int m=1);
    PhanSo operator+(const PhanSo& o);
    PhanSo operator-(const PhanSo& o);
    PhanSo operator*(const PhanSo& o);
    PhanSo operator/(const PhanSo& o);
    bool operator==(const PhanSo& o);
    bool operator>(const PhanSo& o);
    bool operator<(const PhanSo& o);
    friend istream& operator>>(istream& in,PhanSo& ps);
    friend ostream& operator<<(ostream& out,const PhanSo& ps);

};

#endif // PHANSO_H
