#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define FOR(i,a,b,c) for (int i=a, _b=(b); i<b; i+=c)
#define pll pair<ll,ll>
#define fi first
#define se second

using namespace std;

int step=0;

int counts=0;
void solve(string &a, string &b) {
    while (step+a.size()<=b.size()) {
        FOR(i,0,a.size()+1,1) {
            if (a[i]==b[step+i]) {
                counts++;
            }
        }
        step++;
    }
    cout << counts-1 << endl;
}


int main()
{
    cin.tie(0)->sync_with_stdio(false);

    string a,b;
    getline(cin,a);
    getline(cin,b);

    if (a.size()>b.size()) swap(a,b);
    solve(a,b);

    return 0;
}
