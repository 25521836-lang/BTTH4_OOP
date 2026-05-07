#ifndef CVECTOR_H
#define CVECTOR_H

#include<iostream>
using namespace std;
class CVector{
private:
    int soChieu;
    float* giaTri;
public:
    CVector();
    CVector(int n);
    ~CVector();
    void nhap();
    void xuat();
    CVector& operator=(const CVector& v);
    CVector operator+(const CVector& v);
    CVector operator-(const CVector& v);
    CVector operator*(float k);
    float operator*(const CVector& v);
};

#endif
