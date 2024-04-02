#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);
    freopen("DTMAX.INP","r",stdin);
    freopen("DTMAX.OUT","w",stdout);
    long long P;
    cin >> P;

    long long maxDT = 0;
    for (long long a = 1; a <= P / 2; ++a) {
        if (P % 2 == 0 && P / 2 % a == 0) {
            long long b = P / 2 - a;
            long long dt = a * b;
            if (dt > maxDT) maxDT = dt;
        }
    }

    cout << maxDT;
    return 0;
}
