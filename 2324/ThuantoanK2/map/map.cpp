#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second

map<ll,ll>d;

int main()
{
    ll n, x;
    cin >> n;
    for (ll i=0; i<n; i++) {
        cin >> x;
        d[x]++;
    }
    for (auto i:d) cout << i.fi << " " << i.se << endl;

    return 0;
}
