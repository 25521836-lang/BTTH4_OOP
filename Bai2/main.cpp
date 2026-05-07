#include "PhanSo.h"

int main() {
    PhanSo a, b;

    cout << "Nhap phan so a:\n";
    cin >> a;

    cout << "\nNhap phan so b:\n";
    cin >> b;

    cout << "\n===== KET QUA =====\n";

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;

    if (a == b)
        cout << "a == b\n";
    else
        cout << "a != b\n";

    if (a > b)
        cout << "a > b\n";
    else if (a < b)
        cout << "a < b\n";
    else
        cout << "a = b\n";

    // Test số nguyên
    PhanSo c = 5;
    cout << "\nSo nguyen 5 duoc xem la: " << c << endl;

    return 0;
}
