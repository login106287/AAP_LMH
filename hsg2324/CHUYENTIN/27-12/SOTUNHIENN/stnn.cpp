#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    for (int i = 0; i <= n; i++) {
        cout << 2 * i + 1;
        if (i <= n - 1) {
            cout << "-";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    solve(n);
    return 0;
}
