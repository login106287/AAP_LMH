#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("min.inp","r",stdin);
    //freopen("min.out","w",stdout);
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = 1;

    for (int i = 0; i <= n - k; i++) {
        vector<int> uniqueNums(k + 1, 0);

        for (int j = i; j < i + k; j++) {
            uniqueNums[arr[j]] = 1;
        }

        int missingNum = 1;
        while (uniqueNums[missingNum] != 0) {
            missingNum++;
        }

        result = min(result, missingNum);
    }

    cout << result;

    return 0;
}
