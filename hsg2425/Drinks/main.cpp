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
    double n,w,o=0;
    cin >> n;

    FOR(i,0,n,1) {
        cin >> w;
        o+=w;
    }

    cout << o/(n*100)*100 << endl;

    return 0;
}
