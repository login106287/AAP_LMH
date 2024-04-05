#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pii pair<ll, ll>
#define FOR(i,a,b,c) for (int i=(a),_b=(b);i<b;i+=c)
#define fi first
#define se second

using namespace std;

void solve(string s) {
    int counts=0, temp=0, max_v=0;
    string new_s="";
    FOR(i,0,s.size()+1,1) {
        if (isdigit(s[i])) temp=temp*10+(s[i]-'0');
        else {
            counts+=temp;
            FOR(j,0,temp,1) {
                new_s+=s[i];
            }
            temp=0;
        }
    }

    int cnt=1;
    FOR(k,1,new_s.size()+1,1) {
        if (new_s[k]==new_s[k-1]) {
            cnt++;
        }
        else {
            max_v=max(max_v,cnt);
            cnt=1;
        }
    }
    cout << max_v << endl;
}

int main()
{
    string s;
    cin >> s;

    solve(s);

    return 0;
}
