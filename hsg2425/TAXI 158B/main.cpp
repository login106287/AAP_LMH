#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define FOR(i,a,b,c) for (ll i=a, _b=(b); i<b; i+=c)
#define pll pair<ll,ll>
#define fi first
#define se second

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    double n, x;
    cin >> n;

    vi a(n);

    FOR(i,0,n,1) {
        cin >> x;
        a[i]=x;
    }

    sort(a.begin(),a.end(),greater<int>());

    int temp=0, k=0, counts=0;
    while (a[k]!=a[n-1-temp]) {
        if (a[k]+a[n-1-temp]>4) {
            k++;
        }
        else {
            temp++;
        }
        counts++;
    }

    cout << counts << endl;

    return 0;
}
