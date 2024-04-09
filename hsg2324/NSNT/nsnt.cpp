#include <bits/stdc++.h>
using namespace std;

bool isPrimeNumber(int n) {
    for (int i=2; i<sqrt(n);i++) {
        if (n%i==0) return 0;
    }
    return 1;
}

int main()
{
    long long n;
    cin >> n;
    while (n!=0) {
        if (isPrimeNumber(n)) cout << n << endl;
        n/=10;
    }
    return 0;
}
