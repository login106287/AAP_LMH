#include <bits/stdc++.h>
using namespace std;

int isPrimeNumber(int x) {
    if (x<2) {
        return 0;
    }
    for (int i=2; i <= sqrt(x); i++) {
        if (x%i==0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int A,B;
    cin >> A >> B;
    for (int i=A; i<=B; i++) {
        if (isPrimeNumber(i)) {
            cout << i << "\n";
        }
    }

    return 0;
}
