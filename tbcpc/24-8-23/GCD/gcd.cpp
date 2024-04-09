#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("gcd.INP","r",stdin);
    freopen("gcd.OUT","w",stdout);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    vector<int> result(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (int j = 0; j < m; j++) {
        int gcd_temp = a[0] + b[j];
        for (int i = 1; i < n; i++) {
            gcd_temp = gcd(gcd_temp, a[i] + b[j]);
        }
        result[j] = gcd_temp;
    }

    for (int j = 0; j < m; j++) {
        cout << result[j] << " ";
    }
    return 0;
}
