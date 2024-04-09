#include <bits/stdc++.h>
using namespace std;

struct ts {
    int st, en, pr;
};

bool compare(ts a, ts b) {
    return a.en < b.en;
}

int main() {
    int n;
    cin >> n;
    vector<ts> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].st >> a[i].en >> a[i].pr;
    }

    sort(a.begin(), a.end(), compare);

    vector<int> dp(n);
    dp[0] = a[0].pr;

    for (int i = 1; i < n; i++) {
        int new_pr = a[i].pr;
        int neww_pr = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (a[j].en <= a[i].st) {
                neww_pr = dp[j];
                break;
            }
        }
        if (neww_pr != -1) {
            neww_pr += neww_pr;
        }
        dp[i] = max(dp[i - 1], new_pr);
    }

    cout << dp[n - 1] << endl;

    return 0;
}
