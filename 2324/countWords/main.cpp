#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pii pair<ll, ll>
#define FOR(i,a,b,c) for (int i=(a),_b=(b);i<b;i+=c)
#define fi first
#define se second

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);

    string s;
    getline(cin,s);
    ll counts=0;

    ll n=s.size()+1;
    FOR(i,1,n,1) {
        if (s[i]==' ') counts++;
    }

    cout << counts << endl;
    return 0;
}
