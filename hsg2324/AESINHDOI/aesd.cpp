#include <bits/stdc++.h>
using namespace std;

void chuyen_nuoc(int n, int m) {
    if (n > m) {
        cout << "Ly A sang ly B " << (n - m)/2 << " ml" << endl;
    } else if (m > n) {
        cout << "Ly B sang ly A " << (m - n)/2 << " ml" << endl;
    } else {
        cout << "0" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;
    chuyen_nuoc(n, m);
    return 0;
}
