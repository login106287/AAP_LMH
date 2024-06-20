#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pci pair<char,int>
#define fi first
#define se second

struct points {
    ll x;
    ll y;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    fstream doc, ghi;
    doc.open("CNTSTR.inp", ios::in);
    ghi.open("CNTSTR.out", ios::out | ios::trunc);

    string s;
    vector<pci>p(26), temp;
    p[0].fi = 'a'-1;
    cin >> p[0].se;
    for (int i=1; i<26; i++) {
        cin >> p[i].se;
        p[i].fi=p[i-1].fi+1;
    }

    cin >> s;

    for (int i=0; i<26; i++) {
        for (int j=0; j<s.size(); j++) {
            if (s[j]==p[i].fi) {
                temp.push_back({s[j],p[i].se});
            }
        }
    }

    for (auto x:temp) cout << x.fi <<' '<< x.se << endl;

    doc.close();
    ghi.close();
    return 0;
}
