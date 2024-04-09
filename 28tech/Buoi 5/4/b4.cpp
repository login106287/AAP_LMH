#include <bits/stdc++.h>
using namespace std;

void isPrimeNumber(long long n) {
    int counts = 0;
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) {
            counts++;
        }
    }
    if (counts!=0) cout <<0;
    else cout << 1;

}

int main()
{
    long long n;
    cin >> n;
    isPrimeNumber(n);
    return 0;
}
