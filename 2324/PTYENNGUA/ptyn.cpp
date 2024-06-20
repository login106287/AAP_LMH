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
    cin.tie(NULL); cout.tie(NULL);

    int n,m;
    cin >> n >> m;

    vector<int>minRow(n,INT_MAX);
    vector<int>maxCol(m,-INT_MAX);
    vector<pi>ans;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) cin >> a[i][j];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            minRow[i]=min(a[i][j],minRow[i]);
            maxCol[j]=max(a[i][j],maxCol[j]);
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (a[i][j]==maxCol[j]&&a[i][j]==minRow[i]) {
                ans.push_back({i+1,j+1});
            }
        }
    }
    if (ans.size()) {
        for (auto x:ans) cout << x.fi << " " << x.se;
    }
    else cout << -1;

    return 0;
}
