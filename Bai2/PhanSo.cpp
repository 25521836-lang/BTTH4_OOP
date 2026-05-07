#include "PhanSo.h"
#include<cmath>

int gcd(int a,int b){
    if(b==0)
        return abs(a);
    return gcd(b,a%b);
}
PhanSo::PhanSo(int t,int m)
{
    tu=t;
    mau=(m==0)?1:m;
    rutGon();
}
void PhanSo::rutGon(){
    int g=gcd(abs(tu),abs(mau));
    tu/=g;
    mau/=g;
    if(mau<0){
        tu=-tu;
        mau=-mau;
    }
}
PhanSo PhanSo::operator+(const PhanSo& o){
    return PhanSo(tu*o.mau+o.tu*mau,mau*o.mau);
}
PhanSo PhanSo::operator-(const PhanSo& o){
    return PhanSo(tu*o.mau-o.tu*mau,mau*o.mau);
}
PhanSo PhanSo::operator*(const PhanSo& o){
    return PhanSo(tu*o.tu,mau*o.mau);
}
PhanSo PhanSo::operator/(const PhanSo& o){
    return PhanSo(tu*o.mau,mau*o.tu);
}
bool PhanSo::operator==(const PhanSo& o){
    return tu*o.mau == mau*o.tu;
}
bool PhanSo::operator>(const PhanSo& o){
    return tu*o.mau>mau*o.tu;
}
bool PhanSo::operator<(const PhanSo &o){
    return tu*o.mau<mau*o.tu;
}
istream& operator>>(istream& in,PhanSo& ps){
    cout<<"Nhap tu:";
    in>>ps.tu;
    cout<<"Nhap mau:";
    in>>ps.mau;
    if(ps.mau==0)
        ps.mau==1;
    ps.rutGon();
    return in;
}
ostream& operator<<(ostream& out,const PhanSo& ps){
    out<<ps.tu<<"/"<<ps.mau;
    return out;
}
