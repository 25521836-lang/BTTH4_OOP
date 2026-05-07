#include "CVector.h"

int main(){

    CVector v1, v2;

    cout << "Nhap vector 1:\n";
    v1.nhap();

    cout << "Nhap vector 2:\n";
    v2.nhap();

    cout << "\nV1 = ";
    v1.xuat();

    cout << "\nV2 = ";
    v2.xuat();

    CVector tong = v1 + v2;
    cout << "\n\nTong: ";
    tong.xuat();

    CVector hieu = v1 - v2;
    cout << "\nHieu: ";
    hieu.xuat();

    CVector tichSo = v1 * 2;
    cout << "\nV1 * 2 = ";
    tichSo.xuat();

    cout << "\nTich vo huong = " << (v1 * v2);

    return 0;
}
