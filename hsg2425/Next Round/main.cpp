#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define FOR(i,a,b,c) for (ll i=a; i<b; i+=c)
#define FOD(i,a,b,c) for (ll i=a; i>b; i-=c)
#define endl "\n"
using namespace std;

main() {
    cin.tie(0)->sync_with_stdio(false);

    int n,k,counts=0;
    cin >> n >> k;

    int a[n];

    FOR(i,0,n,1) cin >> a[i];

    const int TEMP = a[k-1];

    sort(a,a+n);

    FOR(i,0,n,1) {
        if (a[i]>=TEMP&&a[i]>0) counts++;
    }

    cout << counts << endl;

    return 0;
}
