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

    int a,b,c,d,s;
    cin >> a >> b >> c >> d;

    s=a*b+c*d;

    double q = sqrt(s);


    if (q==int(q)) cout << q*q << endl;
    else cout << int(q+1)*int(q+1);


    return 0;
}
