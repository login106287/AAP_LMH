#include <bits/stdc++.h>
using namespace std;
long long n;

void solve() {
    cin >> n;
    cout << n/2+1 << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("maxmod.INP","r",stdin);
    freopen("maxmod.OUT","w",stdout);

    int T;
    cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}
