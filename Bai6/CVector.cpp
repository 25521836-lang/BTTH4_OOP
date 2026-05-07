#include "CVector.h"

// Ham tao mac dinh
CVector::CVector(){
    soChieu = 0;
    giaTri = NULL;
}

// Ham tao co tham so
CVector::CVector(int n){
    soChieu = n;
    giaTri = new float[soChieu];

    for(int i = 0; i < soChieu; i++){
        giaTri[i] = 0;
    }
}

// Ham huy
CVector::~CVector(){
    delete[] giaTri;
}

// Ham gan
CVector& CVector::operator=(const CVector& v){

    if(this != &v){

        delete[] giaTri;

        soChieu = v.soChieu;
        giaTri = new float[soChieu];

        for(int i = 0; i < soChieu; i++){
            giaTri[i] = v.giaTri[i];
        }
    }

    return *this;
}

// Nhap
void CVector::nhap(){

    cout << "Nhap so chieu: ";
    cin >> soChieu;

    delete[] giaTri;
    giaTri = new float[soChieu];

    for(int i = 0; i < soChieu; i++){
        cout << "a[" << i << "] = ";
        cin >> giaTri[i];
    }
}

// Xuat
void CVector::xuat(){

    cout << "(";

    for(int i = 0; i < soChieu; i++){
        cout << giaTri[i];

        if(i < soChieu - 1)
            cout << ", ";
    }

    cout << ")";
}

// Cong
CVector CVector::operator+(const CVector& v){

    CVector kq(soChieu);

    for(int i = 0; i < soChieu; i++){
        kq.giaTri[i] = giaTri[i] + v.giaTri[i];
    }

    return kq;
}

// Tru
CVector CVector::operator-(const CVector& v){

    CVector kq(soChieu);

    for(int i = 0; i < soChieu; i++){
        kq.giaTri[i] = giaTri[i] - v.giaTri[i];
    }

    return kq;
}

// Nhan voi so
CVector CVector::operator*(float k){

    CVector kq(soChieu);

    for(int i = 0; i < soChieu; i++){
        kq.giaTri[i] = giaTri[i] * k;
    }

    return kq;
}

// Tich vo huong
float CVector::operator*(const CVector& v){

    float tong = 0;

    for(int i = 0; i < soChieu; i++){
        tong += giaTri[i] * v.giaTri[i];
    }

    return tong;
}
