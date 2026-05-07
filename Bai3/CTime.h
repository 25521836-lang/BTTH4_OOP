#ifndef CTIME_H
#define CTIME_H

#include<iostream>
using namespace std;
class CTime
{
   private:
       int gio,phut,giay;
       void chuanHoa();
   public:
    CTime(int h=0,int p=0,int s=0);
    CTime operator+(int x);
    CTime operator-(int x);
    CTime& operator++();
    CTime operator++(int);
    CTime& operator--();
    CTime operator--(int);
    friend istream& operator>>(istream& in,CTime& t);
    friend ostream& operator<<(ostream& out,const CTime& t);
};

#endif // CTIME_H
