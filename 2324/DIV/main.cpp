#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pii pair<ll, ll>
#define FOR(i,a,b) for (int i=(a),_b=(b);i<b;i++)
#define fi first
#define se second

using namespace std;

pii solve(ll a, ll b) {
    if (b==0) return {0,0};
    ll gcd = __gcd(abs(a),abs(b));
    if ((a/gcd) + (b/gcd) > 0) return {a/gcd, b/gcd};
    else if ((a/gcd) + (b/gcd) < 0) return {-a/gcd, -b/gcd};
    else return {0,0};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int Q;
    ll a,b;

    cin >> Q;
    FOR(i,0,Q) {
        cin >> a >> b;
        pii result = solve(a,b);
        cout << result.fi << " " << result.se << endl;
    }

    return 0;
}
