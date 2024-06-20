#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int a,b,c,k,m,n;
    cin >> a >> b >> c >> k >> m >> n;
    cout << a*k + m*b + (n-m-k)*c;
    return 0;
}
