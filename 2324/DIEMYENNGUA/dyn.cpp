#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pi pair<ll,ll>

int a[1006][1006];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,m;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }

    vector<int>minRow(n, 2000);
    vector<int>maxCol(m, -2000);

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            minRow[i]=min(a[i][j],minRow[i]);
            maxCol[j]=max(a[i][j],maxCol[j]);
        }
    }

    vector<pi> result;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (a[i][j]==minRow[i]&&a[i][j]==maxCol[j]) result.push_back({i+1,j+1});
        }
    }

    if (result.size()) {
        for (auto x:result) cout << x.fi << " " << x.se << "\n";
    }
    else cout << -1;

    return 0;
}
