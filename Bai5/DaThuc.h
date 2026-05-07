#ifndef DATHUC_H
#define DATHUC_H

#include<iostream>
using namespace std;
class DaThuc{
private:
    int bac;
    float *heso;
public:
    DaThuc(int b=0);
    ~DaThuc();
    friend istream& operator>>(istream& in, DaThuc& dt);
    friend ostream& operator<<(ostream& out, DaThuc dt);
    DaThuc operator+(DaThuc dt);
    DaThuc operator-(DaThuc dt);
    DaThuc operator*(DaThuc dt);
    float tinhGiaTri(float x);
};

#endif
