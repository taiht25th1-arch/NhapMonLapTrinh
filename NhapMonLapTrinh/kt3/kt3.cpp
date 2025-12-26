
#include <iostream>
using namespace std;

bool kiemTraSoNguyenTo(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (kiemTraSoNguyenTo(n))
        cout << n << " la so nguyen to";
    else
        cout << n << " khong phai la so nguyen to";
}

