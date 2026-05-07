
#include<iostream>
#include "CTime.h"

using namespace std;
int main()
{
    CTime t;
    cin >> t;
    cout << "\nThoi gian vua nhap: " << t << endl;
    cout << "Cong 120 giay: " << t + 120 << endl;
    cout << "Tru 70 giay: " << t - 70 << endl;
    ++t;
    cout << "Sau ++t: " << t << endl;
    t++;
    cout << "Sau t++: " << t << endl;
    --t;
    cout << "Sau --t: " << t << endl;
    t--;
    cout << "Sau t--: " << t << endl;
    return 0;
}
