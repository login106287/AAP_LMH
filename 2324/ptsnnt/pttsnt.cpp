#include <bits/stdc++.h>
using namespace std;

void pttsnt(int n) {
    int i = 2;
    int counts = 0;
    int a[100];
    while (n > 1) {
        if (n % i == 0) {
            n = n / i;
            a[counts++] = i;
        } else {
            i++;
        }
    }
    if (counts == 0) {
        a[counts++] = n;
    }
    for (i = 0; i < counts - 1; i++) {
        cout<< a[i] << endl;
    }
  cout<< a[counts - 1];
}

int main() {
    freopen("pttsnt.inp","r",stdin);
    freopen("pttsnt.out","w",stdout);
    int n;
    cin >> n;
    pttsnt(n);
}
