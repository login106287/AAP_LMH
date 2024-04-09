#include<bits/stdc++.h>
using namespace std;
int n,d,ans;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> d;
    char a[n+1][d+1];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=d;j++)
            cin >> a[i][j];
    int temp=0;
    for(int i=1;i<=d;i++)
    {
        bool ok = true;
        for(int j=1;j<=n;j++)
        {
            if (a[j][i]=='x')
            {

                ok = false;

                break;
            }
        }
        if (ok) temp++;
        else {ans = max(ans,temp);temp=0;}
    }
    cout << ans;
    return 0;
}
