#include <bits/stdc++.h>
using namespace std;

int findMaxS(int n, long long w, vector<int>& weights) {
    int maxS = 0;
    long long currentWeight = 0;
    int left = 0, right = 0;

    while (right < n) {
        currentWeight += weights[right];

        while (currentWeight > w) {
            currentWeight -= weights[left];
            left++;
        }

        maxS = max(maxS, right - left + 1);
        right++;
    }

    return maxS;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("dday.inp","r",stdin);
    freopen("dday.out","w",stdout);
    long long n;
    long long w;
    cin >> n >> w;

    vector<int> weights(n);

    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    long long maxS = findMaxS(n, w, weights);
    cout << maxS;

    return 0;
}
