#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll counts(ll x, ll y) {
    ll g = gcd(x, y);
    ll dem = 0;
    for (ll i = 1; i <= g; i++) {
        if (g % i == 0) dem++;
    }
    return dem;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    fstream doc, ghi;
    doc.open("QUA.inp", ios::in);
    ghi.open("QUA.out", ios::out | ios::trunc);

    ll x, y;
    doc >> x >> y;

    ll result = counts(x, y);
    ghi << result;

    doc.close();
    ghi.close();
    return 0;
}
