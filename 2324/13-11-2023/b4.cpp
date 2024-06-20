#include <bits/stdc++.h>
using namespace std;

bool isPrimeNumber(long long n) {
    if (n<2) return 0;
    for (long long i=2; i<=sqrt(n); i++) {
        if (n%i==0) return 0;
    }
    return 1;
}

int solve(long long n) {
    while (n!=0) {
        if (isPrimeNumber(n)) return 0;
        n/=10;
    }
    return 1;
}

int main()
{
    long long a,b,c;
    cin >> a >> b >> c;
    cout << solve(a) << endl << solve(b) << endl << solve(c);

    return 0;
}
