#ifndef CVECTOR_H
#define CVECTOR_H

#include<iostream>
using namespace std;

class CVector{
private:
    int n;
    float* a;

public:
    CVector(int k=0);
    ~CVector();

    void nhap();
    void xuat();

    float get(int i) const;
    void set(int i, float value);
    int size() const;
};

#endif
