#include <bits/stdc++.h>
#define ll long long
#define FOR(i,a,b,c) for (ll i=a; i<b; i+=c)
#define endl "\n"

using namespace std;

int main()
{
    ll m,n,s=0;
    cin >> m >> n;
    ll a[m+2][n+2];

    FOR(i,1,m+1,1) {
        FOR(j,1,n+1,1) {
            if ((i+j)%2==0) a[i][j]=0;
            else a[i][j]=(i-1)*n-j;
            s+=a[i][j];
        }
    }
    cout << s << endl;
    return 0;
}
