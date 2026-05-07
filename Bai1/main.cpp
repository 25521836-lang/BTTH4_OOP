#include"SoPhuc.h"
int main(){
    SoPhuc a,b;
    cout<<"Nhap so phuc a:";
    cin>>a;
    cout<<"Nhap so phuc b:";
    cin>>b;
    cout<<"\nKet qua:\n";
    cout<<"a+b="<<a+b<<endl;
    cout<<"a-b="<<a-b<<endl;
    cout<<"a*b="<<a*b<<endl;
    cout<<"a/b="<<a/b<<endl;
    if(a==b)
        cout<<"a==b\n";
    else
        cout<<"a!=b\n";
    SoPhuc c=5;
    cout<<"So thuc 5 thanh so phuc:"<<c<<endl;
    return 0;
}
