#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define fi first
#define se second
#define FOR(i,a,b,c) for (ll i=a; i<b; i+=c)
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    ll a,b,n;
    cin >> a >> b >> n;
    while (n) {
        if (a>3) a-=3;
        else a=0;
        if (b>3) b-=3;
        else b=0;
        n--;
    }
    cout << abs(a-b) << endl;


    return 0;
}
