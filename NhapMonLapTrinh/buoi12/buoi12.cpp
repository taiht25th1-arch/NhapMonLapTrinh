
#include "Array.h"
#define MAX 100
#include <iostream>
using namespace std;

int main()
{
    int a[MAX], n = 0;
    input(a, n);
    //output(a, n);
    //giatrichan(a, n);
    //vitriam(a, n);
    //giatrilonnhat(a, n);
    //giatrinhonhat(a, n);
    //nguyentonhohon100(a, n);
    //tonggiatriam(a, n);
    //sapxep(a, n);
    //output(a, n);
    int vt = vitrichandautien(a, n);
    if (vt == -1) {
        cout << "Khong co gai tri chan cuoi cung" << endl;
    }
    else {
        cout << "Vi tri chan cuoi cung: " << vt << endl;
    }
}