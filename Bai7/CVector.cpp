#include "CVector.h"

CVector::CVector(int k){
    n = k;
    a = new float[n];
    for(int i=0;i<n;i++) a[i]=0;
}

CVector::~CVector(){
    delete[] a;
}

void CVector::nhap(){
    cout << "Nhap so chieu: ";
    cin >> n;

    delete[] a;
    a = new float[n];

    for(int i=0;i<n;i++){
        cout << "a["<<i<<"] = ";
        cin >> a[i];
    }
}

void CVector::xuat(){
    cout << "(";
    for(int i=0;i<n;i++){
        cout << a[i];
        if(i<n-1) cout << ", ";
    }
    cout << ")";
}

float CVector::get(int i) const{
    return a[i];
}

void CVector::set(int i, float value){
    a[i] = value;
}

int CVector::size() const{
    return n;
}
