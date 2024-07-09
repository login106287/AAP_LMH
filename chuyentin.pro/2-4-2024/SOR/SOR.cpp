#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);
    freopen("SOR.INP","r",stdin);
    freopen("SOR.OUT","w",stdout);
    long double R;
    cin >> R;

    int n = 1;
    while (true) {
        long double average = R * n;
        if (ceil(average) == average) {
            cout << n;
            break;
        }
        n++;
    }

    return 0;
}
