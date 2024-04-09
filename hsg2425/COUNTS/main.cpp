#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define FOR(i,a,b) for (int i=(a),_b=(b);i<b;i++)
#define fi first
#define se second
using namespace std;

int main()
{
    map<int,int> m;

    int n, x;
    cin >> n;

    FOR(i,0,n) {
        cin >> x;
        m[x]++;
    }

    for (auto y:m) cout << y.fi << " " << y.se << endl;

    return 0;
}
