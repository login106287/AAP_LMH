#include <bits/stdc++.h>
#define vi vector<ll>
#define vb vector<bool>
#define pii pair<ll, ll>
#define FOR(i,a,b,c) for (int i=(a),_b=(b);i<b;i+c)
#define fi first
#define se second

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);

    int n,a,b,c,d,total=0;
    cin >> n >> a >> b >> c >> d;
    FOR(i,1,n+1,1) {
        if (i%a==0&&i%b==0) total+=max(c,d);
        else if (i%a==0) total+=c;
        else if (i%b==0) total+=d;
    }
    cout << total  << endl;

    return 0;
}
