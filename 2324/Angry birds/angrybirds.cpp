#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll a) {
    if (a>0) cout << "CURVE UP" << endl;
    else if (a<0) cout << "CURVE DOWN" << endl;
    else cout << "NO CURVE" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, a, b, c;
    cin >> n;
    for (ll i=0; i<n; i++) {
        cin >> a >> b >> c;
        solve(c);
    }


}
