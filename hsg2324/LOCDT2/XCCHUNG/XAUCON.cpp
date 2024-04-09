#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve(string s1, string s2) {
    int n=s1.size(), m=s2.size(), l=0;
    vector<vi>dp(n+1,vi(m+1,0));

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (s1[i-1]==s2[j-1]) {
                dp[i][j]=dp[i-1][j-1]+1;
                if (dp[i][j]>l) l=dp[i][j];
            }
            else dp[i][j]=0;
        }
    }
    cout << l;
}

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    solve(s1,s2);

    return 0;
}
