#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define FOR(i,a,b,c) for (int i=a, _b=(b); i<b; i+=c)
#define pll pair<ll,ll>
#define fi first
#define se second

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int n,maxx=0;
    cin >> n;
    vi a(n);
    FOR(i,0,n,1) {
        cin >> a[i];
    }

    int counts=1,temp=0,remain;
    FOR(i,0,n,1) {
        if (a[i]==a[i-1]) counts++;
        else if (a[i]!=a[i-1] && a[i-1]==a[i+1] && temp!=a[i-1]) {
            temp=a[i-1];
            counts++;
            remain=1;
        }
        else if (a[i]!=a[i-1] && a[i]==a[i-2] && remain==1) {
            counts++;
            remain=0;
        }

        else {
            maxx=max(maxx,counts);
            counts=1;
        }
    }
    cout << maxx << endl;

    return 0;
}
