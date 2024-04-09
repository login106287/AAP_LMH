#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) cin >> a[i];

    vi dp(n, 0);

    for (ll i=0; i<n; ++i) {
        ll maxs=a[i];
        for (ll j=0; j<i; ++j) {
            if (a[j]<a[i]) {
                maxs = max(maxs, dp[j]+a[i]);
            }
        }
        dp[i]=maxs;
    }

    ll maxs = *max_element(dp.begin(), dp.end());
    if (k == 0) cout << 0 << endl;
    else cout << maxs << endl;

    return 0;
}
