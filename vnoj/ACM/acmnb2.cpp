#include<algorithm>
#include<iostream>
#include<numeric>
#include<vector>
using namespace std;

void solve(int n) {
    vector<int> v;
    int res = 0;
    for(int i = 0, a, b; i < 2 * n; ++i) {
        cin >> a >> b;
        res += a;
        v.push_back(b - a);
    }
    sort(v.begin(), v.end());
    cout << res + accumulate(v.begin(), v.begin() + n, 0) << '\n';
}

int main() {
    int n;
    cin >> n;
    solve(n);

    return 0;
}
