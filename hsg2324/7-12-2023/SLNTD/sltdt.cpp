#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> groups;

    for (int i = 0; i < n; ++i) {
        int members;
        cin >> members;
        groups[members]++;
    }

    int counts = 0;
    for (const auto & pair: groups) {
        counts += pair.second / pair.first;
    }

    cout << counts << endl;

    return 0;
}
