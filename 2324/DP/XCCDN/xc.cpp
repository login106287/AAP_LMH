#include <bits/stdc++.h>
using namespace std;

int result(string s1, string s2){
    int n=s1.size(), m=s2.size();
    vector<vector<int>>dp(m+1,vector<int>(n+1,0));
    int l=0;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (s1[i-1]==s2[j-1]) {
                dp[i][j]= dp[i-1][j-1]+1;
                if  (dp[i][j]>l) l=dp[i][j];
            }
            else dp[i][j]=0;
        }
    }
    return l;
}

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout << result(s1,s2);

    return 0;
}
