#ifndef CDATE_H
#define CDATE_H

#include<iostream>
using namespace std;
class CDate
{
private:
    int ngay,thang,nam;
public:
    CDate(int d=1,int m=1,int y=2000);
    bool namNhuan(int y) const;
    int soNgayThangNam(int m,int y) const;
    void ngayKeTiep();
    void ngayHomTruoc();
    CDate operator+(int x);
    CDate operator-(int x);
    int operator-(CDate a);
     CDate& operator++();
    CDate operator++(int);
    CDate& operator--();
    CDate operator--(int);
    friend istream& operator>>(istream& in,CDate& a);
    friend ostream& operator<<(ostream& out,const CDate& a);
};

#endif // CDATE_H
