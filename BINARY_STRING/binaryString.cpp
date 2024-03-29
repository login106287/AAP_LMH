#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define FOR(i,a,b) for (int i=(a),_b=(b);i<b;i++)
using namespace std;

void generateBinary(int n, string prefix = "") {
    if (prefix.size() == n) {
        cout << prefix << endl;
        return;
    }

    generateBinary(n, prefix + "0");
    generateBinary(n, prefix + "1");
}

int main() {
    int n;
    cin >> n;

    generateBinary(n);

    return 0;
}
