#include "DaThuc.h"

int main(){
    DaThuc dt1,dt2;
    cout<<"Nhap da thuc thu nhat:\n";
    cin>>dt1;
    cout<<"\nNhap da thuc thu hai:\n";
    cin>>dt2;
    cout<<"\nDa thuc 1: "<<dt1;
    cout<<"\nDa thuc 2: "<<dt2;
    DaThuc tong=dt1+dt2;
    cout<<"\n\nTong hai da thuc:\n"<<tong;
    DaThuc hieu=dt1-dt2;
    cout<<"\n\nHieu hai da thuc:\n"<<hieu;
    DaThuc tich=dt1*dt2;
    cout<<"\n\nTich hai da thuc:\n"<<tich;
    float x;
    cout<<"\n\nNhap x = ";
    cin>>x;
    cout<<"P("<<x<<") = "<<dt1.tinhGiaTri(x);
    return 0;
}
