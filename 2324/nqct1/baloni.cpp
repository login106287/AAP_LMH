#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    long long n, result = 0;
    cin >> n;
    vector<int> counts;
    counts.resize(1000001, 0);

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(counts[a] == 0) {
            counts[a-1]++;
        }
        else {
            counts[a-1]++;
            counts[a]--;
        }
    }
    for(int i = 0; i < 1000000; i++) {
        result += counts[i];
    }

    cout << result;

    return 0;
}
