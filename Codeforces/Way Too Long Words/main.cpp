#include <bits/stdc++.h>
#define vl vector<ll>
#define fi first
#define se second
#define FOR(i,a,b,c) for (int i=a; i<b; i+=c)
#define FOD(i,a,b,c) for (int i=a; i>b; i-=c)
#define endl "\n"
using namespace std;

void solve(string s) {
    if (s.size()>10) {
        int si = s.size()-2;
        string mid = to_string(si);
        string new_s = s[0] + mid + s[s.size()-1];
        cout << new_s << endl;
    }
    else cout << s << endl;
}

main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;
    FOR(i,0,n,1) {
        string s;
        cin >> s;
        solve(s);
    }

    return 0;
}
