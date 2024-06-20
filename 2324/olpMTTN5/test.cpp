#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long>

 main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> dp(n);
    ll maxSum = 0;

    for (ll i = 0; i < n; i++) {
        dp[i] = a[i];
        for (ll j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                dp[i] = max(dp[i], dp[j] + a[i]);
            }
        }
        maxSum = max(maxSum, dp[i]);
    }
    if (k==0) cout << 0 << endl;
    else cout << maxSum << endl;

    return 0;
}
