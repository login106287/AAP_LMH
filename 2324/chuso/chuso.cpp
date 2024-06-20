#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    int counts=0, s=0;
    while (n!=0) {
        counts++;
        s+=(n%10);
        n/=10;
    }
    cout << counts << endl << s;
}

int main()
{
    freopen("chuso.inp","r",stdin);
    freopen("chuso.out","w",stdout);
    int n;
    cin >> n;
    solve(n);

    return 0;
}
