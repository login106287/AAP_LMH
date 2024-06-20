#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, s;
    cin >> n;
    ll a[n+1];
    for (int i=0; i<4; i++) cin >> a[i];
    for (int x1=0; x1<=n/a[0]; x1++) {
        for (int x2=0; x2<=n/a[1]; x2++) {
            for (int x3=0; x3<=n/a[2]; x3++) {
                for (int x4=0; x4<=n/a[3]; x4++) {
                   s= x1*a[0] + x2*a[1]+ x3*a[2] + x4*a[3];
                   if (s==n) cout << x1 << " " << x2 <<  " " << x3 <<  " " << x4 << endl;
                }
            }
        }
    }

    return 0;
}
