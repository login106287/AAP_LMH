#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define FOR(i,a,b,c) for (int i=a, _b=(b); i<b; i+=c)
#define pll pair<ll,ll>
#define fi first
#define se second

using namespace std;

void solve() {
    string s;
    cin >> s;

    if(s.size() < 2) {
        cout << "-1\n";
        return;
    }

    int n = s.size();
    s += '#';

    FOR(i,0,n-1,1) {
        if(s[i] == s[i + 1] || s[i] == s[i + 2]) {
            cout << "0\n";
            return;
        }
    }

    cout << "1\n";
}

int main() {
    int t;
    cin >> t;

    while(t--) solve();
    return 0;
}
