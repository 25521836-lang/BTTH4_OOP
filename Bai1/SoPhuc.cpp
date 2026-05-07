#include "SoPhuc.h"

SoPhuc::SoPhuc(double r,double i)
{
    real=r;
    imag=i;
}
SoPhuc SoPhuc::operator+(const SoPhuc& other){
    return SoPhuc(real+other.real,imag+other.imag);
}
SoPhuc SoPhuc::operator-(const SoPhuc& other){
    return SoPhuc(real-other.real,imag-other.imag);
}
SoPhuc SoPhuc::operator*(const SoPhuc& other){
    return SoPhuc(real*other.real-imag*other.imag,real*other.imag+imag*other.real);

}
SoPhuc SoPhuc::operator/(const SoPhuc& other){
    double denom=other.real*other.real+other.imag*other.imag;
    return SoPhuc((real*other.real+imag*other.imag)/denom,
    (imag*other.real-real*other.imag)/denom);
}
bool SoPhuc::operator==(const SoPhuc& other){
    return real ==other.real && imag==other.imag;
}
bool SoPhuc::operator!=(const SoPhuc& other){
    return!(*this==other);
}
istream& operator>>(istream& in, SoPhuc& c) {
    cout << "Nhap phan thuc: ";
    in >> c.real;
    cout << "Nhap phan ao: ";
    in >> c.imag;
    return in;
}
ostream& operator<<(ostream& out,const SoPhuc& c){
    out<<c.real;
    if(c.imag>=0)
        out<<"+";
    out<<c.imag<<"i";
    return out;
}
