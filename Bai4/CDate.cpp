#include "CDate.h"

CDate::CDate(int d,int m,int y){
    ngay=d;
    thang=m;
    nam=y;
}
bool CDate::namNhuan(int y) const{
    return (y%400==0||(y%4==0 && y%100!=0));
}
int CDate::soNgayThangNam(int m,int y)const{
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        return 31;
    }
    else if(m==4||m==6||m==9||m==11){
        return 30;
    }
    else if(m==2){
        if(namNhuan(y)){
            return 29;
        }
        return 28;
    }
}
void CDate::ngayKeTiep(){
    ngay++;
    if(ngay>soNgayThangNam(thang,nam)){
        ngay=1;
        thang++;
        if(thang>12){
            thang=1;
            nam++;
        }
    }
}
void CDate::ngayHomTruoc(){
    ngay--;
    if(ngay<1){
        thang--;
        if(thang<1){
            thang=12;
            nam--;
        }
        ngay=soNgayThangNam(thang,nam);
    }
}
CDate CDate::operator+(int x){
    CDate tam=*this;
    for(int i=0;i<x;i++){
        tam.ngayKeTiep();
    }
    return tam;
}
CDate CDate::operator-(int x){
    CDate tam=*this;
    for(int i=0;i<x;i++){
        tam.ngayHomTruoc();
    }
    return tam;
}
int CDate::operator-(CDate a){
    CDate tam=a;
    int dem=0;
    while(!(tam.ngay==ngay &&tam.thang==thang &&tam.nam==nam)){
        tam.ngayKeTiep();
        dem++;
    }
    return dem;
}
CDate& CDate::operator++(){
    ngayKeTiep();
    return *this;
}
CDate CDate::operator++(int){
    CDate tam=*this;
    ngayKeTiep();
    return tam;
}
CDate& CDate::operator--(){
    ngayHomTruoc();
    return *this;
}
CDate CDate::operator--(int){
    CDate tam=*this;
    ngayHomTruoc();
    return tam;
}
istream& operator>>(istream& in,CDate& a){
    cout<<"Nhap ngay: ";
    in>>a.ngay;
    cout<<"Nhap thang: ";
    in>>a.thang;
    cout<<"Nhap nam: ";
    in>>a.nam;
    return in;
}
ostream& operator<<(ostream& out,const CDate& a){
    out<<a.ngay<<"/"<<a.thang<<"/"<<a.nam;
    return out;
}

