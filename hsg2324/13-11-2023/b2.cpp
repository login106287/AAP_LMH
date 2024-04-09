#include <bits/stdc++.h>
using namespace std;

bool isPrimeNumber(int n) {
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int result=0;
    for (int i=2; i<=1000; i++) {
        if (isPrimeNumber(i)) {
            cout << i << " ";
            result+=i;
        }
    }
    cout << "Tong tat ca cac so nguyen to la: " << result;
    return 0;
}
