#include <bits/stdc++.h>
using namespace std;

void divisor(int n) {
    for (int i=1; i<=n; i++) {
        if (n%i==0) {
            cout << n/(n/i) << " ";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long n;
    cin >> n;
    divisor(n);
    return 0;
}
