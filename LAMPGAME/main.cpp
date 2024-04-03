#include <bits/stdc++.h>

#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pii pair<ll, ll>
#define FOR(i,a,b) for (int i=(a),_b=(b);i<b;i++)
#define fi first
#define se second

using namespace std;

//void solve(vector<pair<ll,ll>> &pll, ll n) {
 //   sort(pll.begin(),pll.end());
//}

int main()
{
    ll n;
    cin >> n;
    vector<pair<ll,ll>> pll(n,{0,0});

    FOR(i,0,n) {
        cin >> pll[i].fi;
    }
    FOR(i,0,n) {
        cin >> pll[i].se;
    }
    //solve(pll, n);
    sort(pll.begin(),pll.end());
    FOR(i,0,n) {
        cout << pll[i].fi << " " << pll[i].se << endl;
    }

    return 0;
}
