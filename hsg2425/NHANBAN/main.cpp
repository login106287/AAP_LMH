#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define fi first
#define se second
#define FOR(i,a,b,c) for (ll i=a; i<b; i+=c)
#define FOD(i,a,b,c) for (ll i=a; i>b; i-=c)
#define endl "\n"
using namespace std;

string newString(string s) {
    ll n = s.size();
    FOD(i,n-1,-1,1) {
        s+=s[i];
    }
    return s;
}

void solve(string s, ll l, ll r) {
    ll n = s.size(), counts=0;
    FOR(i,l,r+1,1) {
        counts += s[i]-'0';
    }
    cout << counts << endl;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    string a;
    ll l,r;
    cin >> a >> l >> r;

    string new_s = newString(a);
    string new_ss = new_s;

    while (new_ss.size()<r) {
        new_ss+=new_s;
    }

    cout << new_s << endl << new_ss << endl;
    solve(new_ss,l,r);

    return 0;
}
