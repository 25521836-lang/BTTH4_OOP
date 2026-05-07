#ifndef SOPHUC_H
#define SOPHUC_H

#include<iostream>
using namespace std;
class SoPhuc
{
   private:
       double real;
       double imag;
   public:
    SoPhuc(double r=0,double i=0);
    SoPhuc operator+(const SoPhuc& other);
    SoPhuc operator-(const SoPhuc& other);
    SoPhuc operator*(const SoPhuc& other);
    SoPhuc operator/(const SoPhuc& other);
    bool operator==(const SoPhuc& other);
    bool operator!=(const SoPhuc& other);
    friend istream& operator>>(istream& in,SoPhuc& c);
    friend ostream& operator<<(ostream& out,const SoPhuc& c);
};

#endif // SOPHUC_H
