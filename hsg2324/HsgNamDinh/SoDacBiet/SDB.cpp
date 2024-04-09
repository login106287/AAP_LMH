#include <bits/stdc++.h>
using namespace std;
#define ll long long

int soUoc (ll n) {
    ll counts=1;
    for (int i=1; i<=n/2; i++) {
        if (n%i==0) counts++;
    }
    return counts;
}

bool isSpec(ll n) {
    if (soUoc(n)==3) return 1;
    else return 0;
}

void solve(ll n) {
    if (isSpec(n)) cout << n << ' ';
    else {
        for (int i=n+1; i<=n*n; i++) {
            if (isSpec(i)) {
                cout << i << ' ';
                break;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    ll x;
    for (int i=0; i<n; i++) {
        cin >> x;
        solve(x);
    }
    return 0;
}
