#include <bits/stdc++.h>
#define FOR(i,a,b,c) for (int i=a, _b=(b); i<b; i+=c)
using namespace std;

int w[100001], v[100001];
int dp[100001][100001];

void truyvet(int i, int j) {
    vector<int> truy;
    while (dp[i][j]>0) {
        if (dp[i][j]!=dp[i-1][j]) {
            truy.push_back(i);
            j-=w[i];
        }
        i--;
    }
    cout << truy.size() << endl;
    for (int k=truy.size()-1; k>=0; k--) cout << truy[k] << ' ';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("caitui.inp","r",stdin);
    freopen("caitui.out","w",stdout);

    int n, s;
    cin >> n >> s;
    FOR(i,1,n+1,1) {
        cin >> w[i] >> v[i];
    }

    memset(dp,0,sizeof(dp));
    fFOR(i,1,n+1,1) {
        FOR(j,0,s,1) {
            dp[i][j] = dp[i-1][j];
            if (j>w[i]) dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
        }
    }
    cout << dp[n][s]<< endl;
    truyvet(n,s);

    return 0;
}
