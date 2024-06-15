#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define fi first
#define se second
#define FOR(i,a,b,c) for (ll i=a; i<b; i+=c)
#define FOD(i,a,b,c) for (ll i=a; i>b; i-=c)
#define endl "\n"
using namespace std;

main() {
    cin.tie(0)->sync_with_stdio(false);

    int w;
    cin >> w;
    if (w%2==0&&w>2) cout << "YES" <<endl;
    else cout << "NO" << endl;

    return 0;
}
