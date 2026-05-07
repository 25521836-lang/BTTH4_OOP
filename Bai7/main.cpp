#include "CMatrix.h"

int main(){

    CMatrix A,B;
    CVector v;

    cout << "Nhap ma tran A:\n";
    A.nhap();

    cout << "Nhap ma tran B:\n";
    B.nhap();

    cout << "Nhap vector v:\n";
    v.nhap();

    cout << "\nMa tran A:\n";
    A.xuat();

    cout << "\nMa tran B:\n";
    B.xuat();

    cout << "\nVector v: ";
    v.xuat();

    cout << "\n\nA * v = \n";
    CVector kq = A.nhanVector(v);
    kq.xuat();

    cout << "\n\nA * B = \n";
    CMatrix kq2 = A.nhanMaTran(B);
    kq2.xuat();

    return 0;
}
