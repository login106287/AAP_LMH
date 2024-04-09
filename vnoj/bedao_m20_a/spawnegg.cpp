#include <bits/stdc++.h>
using namespace std;

void solve() {
    int tt;
    cin >> tt;
    while (tt --) {
        long long t, k, n;
        cin >> t >> k >> n;
        if (n < t) {
            cout << 0 << "\n";
            continue;
        }
        cout << (n - t) / k + 1 << "\n";
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    solve(m);
    return 0;
}
