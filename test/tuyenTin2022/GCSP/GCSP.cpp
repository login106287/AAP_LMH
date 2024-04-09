#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("GCSP.INP","r",stdin);
    freopen("GCSP.OUT","w",stdout);
    long long n, k, count = 0;
    cin >> n >> k;
    while (k<n) {
        count++;
        k*=2;
    }
    cout << count;


    return 0;
}
