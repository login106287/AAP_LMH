#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cin.tie(0);

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    int counts[100006] = {0};
    for (int i = 0; i < n; i++) counts[a[i]]++;

    int maxCount = 0;
    int numt;
    for (int i = 0; i < 100000; i++) {
        if (counts[i] > maxCount) {
            maxCount = counts[i];
            num = i;
        }
    }

    cout << num << maxCount;

    return 0;
}
