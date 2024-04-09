#include <bits/stdc++.h>
using namespace std;

int isPrimeNum(int n) {
    int count = 0;
    if (n<2) {
        return 0;
    }
    for (int i = 2; i<= sqrt(n); i++) {
        if (n%i==0) {
            count++;
        }
    }
    if (count==0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for (int i=2; i<=n; i++) {
        if (isPrimeNum(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
