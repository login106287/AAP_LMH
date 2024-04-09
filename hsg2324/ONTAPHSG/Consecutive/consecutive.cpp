#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define fi first
#define se second

void solve(int n, int q, string s, vector<pi>p, vi result) {
    int counts=0;
    for (int i=0; i<q; i++) {
        for (int j=p[i].fi+1; j<=p[i].se; j++) {
            if (s[j]==s[j-1]) counts++;
        }
        result.push_back(counts);
        counts=0;
    }
    for (auto x:result) cout << x << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, q, counts=0;
    string s;
    vector<pi>p(q+1);
    vector<int>result(q+1);

    cin >> n >> q;
    cin >> s;
    for (int i=0; i<q; i++) {
        cin >> p[i].fi >> p[i].se;
    }
    solve(n,q,s,p,result);

    return 0;
}
