
#include "CTime.h"
#include <iomanip>

void CTime::chuanHoa()
{
    if (giay >= 60){
        phut += giay / 60;
        giay %= 60;
    }
    if (giay < 0){
        int temp = (-giay + 59) / 60;

        phut -= temp;

        giay += temp * 60;
    }
    if (phut >= 60){
        gio += phut / 60;
        phut %= 60;
    }
    if (phut < 0){
        int temp = (-phut + 59) / 60;

        gio -= temp;

        phut += temp * 60;
    }
    gio %= 24;

    if (gio < 0){
        gio += 24;
    }
}
CTime::CTime(int h, int p, int s){
    gio = h;
    phut = p;
    giay = s;

    chuanHoa();
}
CTime CTime::operator+(int x){
    CTime t = *this;

    t.giay += x;

    t.chuanHoa();

    return t;
}
CTime CTime::operator-(int x){
    CTime t = *this;

    t.giay -= x;

    t.chuanHoa();

    return t;
}
CTime& CTime::operator++(){
    giay++;

    chuanHoa();

    return *this;
}
CTime CTime::operator++(int){
    CTime temp = *this;

    giay++;

    chuanHoa();

    return temp;
}
CTime& CTime::operator--(){
    giay--;

    chuanHoa();

    return *this;
}
CTime CTime::operator--(int){
    CTime temp = *this;

    giay--;

    chuanHoa();

    return temp;
}
istream& operator>>(istream& in, CTime& t){
    cout << "Nhap gio: ";
    in >> t.gio;

    cout << "Nhap phut: ";
    in >> t.phut;

    cout << "Nhap giay: ";
    in >> t.giay;

    t.chuanHoa();

    return in;
}
ostream& operator<<(ostream& out, const CTime& t){
    out << setw(2) << setfill('0') << t.gio << ":"
        << setw(2) << setfill('0') << t.phut << ":"
        << setw(2) << setfill('0') << t.giay;

    return out;
}
