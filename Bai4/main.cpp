#include<iostream>
#include<iomanip>
#include"CDate.h"
using namespace std;
int main(){
    CDate ngayGui,ngayRut;
    cout<<"Nhap ngay gui tien:\n";
    cin>>ngayGui;
    cout<<"\nNhap ngay rut tien:\n";
    cin>>ngayRut;
    double tienGui;
    double laiSuat;
    cout<<"\nNhap so tien gui: ";
    cin>>tienGui;
    cout<<"Nhap lai suat (%/ngay): ";
    cin>>laiSuat;
    int soNgayGui=ngayRut-ngayGui;
    double tienLai=tienGui*laiSuat/100*soNgayGui;
    cout<<"\n===== THONG TIN =====\n";
    cout<<"Ngay gui: "<<ngayGui<<endl;
    cout<<"Ngay rut: "<<ngayRut<<endl;
    cout<<"So ngay gui: "<<soNgayGui<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Tien lai: "<<tienLai<<endl;
    cout<<"Tong tien nhan duoc: "<<tienGui+tienLai;
    return 0;
}
