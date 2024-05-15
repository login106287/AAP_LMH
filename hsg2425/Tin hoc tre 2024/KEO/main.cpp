#include <bits/stdc++.h>
#define ll long long
#define FOR(i,a,b,c) for (ll i=a; i<b; i+=c)
#define endl "\n"

using namespace std;

int main()
{
    int n,a,b,c,d,s=0;
    cin >> n >> a >> b >> c >> d;
    FOR(i,1,n+1,1) {
        if (i%a==0&&i%b==0) s+=max(c,d);
        else if (i%a==0) s+=c;
        else if (i%b==0) s+=d;
    }
    cout << s << endl;

    return 0;
}
