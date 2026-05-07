#ifndef CMATRIX_H
#define CMATRIX_H

#include<iostream>
#include "CVector.h"
using namespace std;

class CMatrix{
private:
    int m,n;
    float** a;

public:
    CMatrix(int d=0,int c=0);
    ~CMatrix();

    void nhap();
    void xuat();

    CVector nhanVector(const CVector& v);
    CMatrix nhanMaTran(const CMatrix& b);
};

#endif
