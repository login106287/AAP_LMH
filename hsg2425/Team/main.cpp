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

    int n,countss=0;
    cin >> n;
    int arr[n+1][4];

    FOR(i,0,n,1) {
        int counts=0;
        FOR(j,0,3,1) {
            cin >> arr[i][j];
            if (arr[i][j]) counts++;
        }
        if (counts>1) countss++;
    }

    cout << countss << endl;

    return 0;
}
