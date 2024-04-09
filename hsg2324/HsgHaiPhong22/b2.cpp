#include <bits/stdc++.h>
using namespace std;
#define vi vector<ll>
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;
    vi v(n), a;
    for (ll i=0; i<n; i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end(),greater<ll>());
    for (auto x:v) cout << x;

    return 0;
}
