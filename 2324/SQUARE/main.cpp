#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define FOR(i,a,b,c) for (int i=a, _b=(b); i<b; i+=c)
#define pll pair<ll,ll>
#define fi first
#define se second

using namespace std;

ll lcm(ll a, ll b, ll c) {
    ll d = (a*b)/__gcd(a,b);
    return (c*d)/__gcd(c,d);
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    ll a,b,c,d,x;

    cin >> a >> b >> c;

    d=lcm(a,b,c);
    FOR(i,1,d+1,1) {
        if ((i*i)%d==0) {
            x=i;
            break;
        }
    }
    cout << x << endl;

    return 0;
}
