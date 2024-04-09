#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long>

bool snt(ll num) {
    if (num<=1) return 0;
    for (ll i =2; i <=sqrt(num); ++i) {
        if (num%i== 0) {
            return 0;
        }
    }
    return 1;
}

ll uocso(ll num) {
    ll counts=0;
    for (ll i =1; i<=sqrt(num); ++i) {
        if (num % i == 0) {
            if (num / i == i) {
                counts++;
            } else {
                counts += 2;
            }
        }
    }
    return counts;
}

ll f(ll num) {
    vector<ll> p;
    ll c = 1;
    for (ll i =2; i <=num; ++i) {
        if (num%i==0 && snt(i)) {
            p.push_back(i);
            if (p.size()==2) break;
        }
    }
    for (ll i=0; i<p.size(); i++) {
        c=c*p[i];
    }
    return c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n, a, b;
    cin >> n >> a >> b;
    ll counts = 0;
    for (ll i = 1; i <= n; ++i) {
        if (snt(i) || (a<=uocso(i) && uocso(i)<=b)) {
            if (f(i)*i<=n) {
                counts++;
            }
            else if (f(i)*i>n) break;
        }
    }
    cout << counts;
    return 0;
}
