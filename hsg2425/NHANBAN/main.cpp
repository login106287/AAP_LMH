#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define fi first
#define se second
#define FOR(i,a,b,c) for (ll i=a; i<b; i+=c)
#define FOD(i,a,b,c) for (ll i=a; i>b; i-=c)
#define endl "\n"
using namespace std;

string add(string s1, string s2) {
    while (s1.size()>s2.size()) s2='0'+s2;
    while (s2.size()>s1.size()) s1='0'+s1;
    int x,y,s=0,nho=0,siz=s1.size();
    string str="";
    FOD(i,siz-1,-1,1) {
        x=int(s1[i]-48);
        y=int(s2[i]-48);
        s=x+y+nho;
        nho=s/10;
        str=char((s%10)+48)+str;
    }
    if (nho>0) str='1' +str;
    return str;
}

string newString(string s) {
    ll n = s.size();
    FOD(i,n-1,-1,1) {
        s+=s[i];
    }
    return s;
}

void solve(string s, ll l, ll r) {
    ll n = s.size();
    string counts="0";
    FOR(i,l-1,r,1) {
        counts=add(counts,s[i]); // can sua kieu du lieu s[i] thanh string
    }
    cout << counts << endl;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    string a;
    ll l,r;
    cin >> a >> l >> r;

    if (a.size()==r) solve(a,l,r);

    else {
        string new_s = newString(a);
        string new_ss = new_s;

        while (new_ss.size()<r) {
            new_ss+=new_s;
        }

        solve(new_ss,l,r);
    }
    return 0;
}
