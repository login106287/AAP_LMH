#include <bits/stdc++.h>
using namespace std;

void phanTichSoNguyen(int n) {
    int i = 2;
    int dem = 0;
    int a[100001];
    // phan tich
    while (n > 1) {
        if (n % i == 0) {
            n = n / i;
            a[dem++] = i;
        } else {
            i++;
        }
    }
    // neu dem = 0 thi n la nguyen to
    if (dem == 0) {
        a[dem++] = n;
    }
    // in ket qua ra man hinh
    for (i = 0; i < dem - 1; i++) {
        cout<< a[i] << " ";
    }
    cout<< a[dem - 1];
}

int main() {
    int n;
    cin >> n;
    // phan tich so nguyen duong n
    phanTichSoNguyen(n);
}
