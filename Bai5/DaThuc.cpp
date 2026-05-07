#include "DaThuc.h"
#include<cmath>
DaThuc::DaThuc(int b){
    bac=b;
    heso=new float[bac+1];
    for(int i=0;i<=bac;i++){
        heso[i]=0;
    }
}
DaThuc::~DaThuc(){
    delete[] heso;
}
istream& operator>>(istream& in, DaThuc& dt){
    cout<<"Nhap bac da thuc: ";
    in>>dt.bac;
    delete[] dt.heso;
    dt.heso=new float[dt.bac+1];
    for(int i=dt.bac;i>=0;i--){
        cout<<"Nhap he so bac "<<i<<": ";
        in>>dt.heso[i];
    }
    return in;
}
ostream& operator<<(ostream& out, DaThuc dt){
    for(int i=dt.bac;i>=0;i--){
        if(dt.heso[i]==0)
            continue;
        if(i!=dt.bac && dt.heso[i]>0)
            out<<" + ";
        if(dt.heso[i]<0)
            out<<" - ";
        float a=abs(dt.heso[i]);
        if(i==0 || a!=1)
            out<<a;
        if(i>0)
            out<<"x";
        if(i>1)
            out<<"^"<<i;
    }
    return out;
}
DaThuc DaThuc::operator+(DaThuc dt){
    int bacMax=(bac>dt.bac)?bac:dt.bac;
    DaThuc kq(bacMax);
    for(int i=0;i<=bacMax;i++){
        float a=(i<=bac)?heso[i]:0;
        float b=(i<=dt.bac)?dt.heso[i]:0;
        kq.heso[i]=a+b;
    }
    return kq;
}
DaThuc DaThuc::operator-(DaThuc dt){
    int bacMax=(bac>dt.bac)?bac:dt.bac;
    DaThuc kq(bacMax);
    for(int i=0;i<=bacMax;i++){
        float a=(i<=bac)?heso[i]:0;
        float b=(i<=dt.bac)?dt.heso[i]:0;
        kq.heso[i]=a-b;
    }
    return kq;
}
DaThuc DaThuc::operator*(DaThuc dt){
    DaThuc kq(bac+dt.bac);
    for(int i=0;i<=bac;i++){
        for(int j=0;j<=dt.bac;j++){
            kq.heso[i+j]+=heso[i]*dt.heso[j];
        }
    }
    return kq;
}
float DaThuc::tinhGiaTri(float x){
    float tong=0;
    for(int i=0;i<=bac;i++){
        tong+=heso[i]*pow(x,i);
    }
    return tong;
}
