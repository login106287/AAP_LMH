#include <bits/stdc++.h>
using namespace std;

string min_str(string X) {
    int n = X.size();
    for (int i = 0; i < n / 2; i++) {
        if (X[i] == '?' && X[n - i - 1] == '?') {
            X[i] = 'A';
            X[n - i - 1] = 'A';
        } else if (X[i] == '?') {
            X[i] = X[n - i - 1];
        } else if (X[n - i - 1] == '?') {
            X[n - i - 1] = X[i];
        } else if (X[i] != X[n - i - 1]) {
            return "-1";
        }
    }
    if (n % 2 != 0 && X[n / 2] == '?') {
        X[n / 2] = 'A';
    } else if (n % 2 != 0 && X[n / 2] != '?' && X[n / 2] != 'A') {
        return "-1";
    }
    return X;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    string X;
    for (int t = 0; t < T; t++) {
        cin >> X;
        if (X=="-1") cout << stoi(min_str(X)) << endl;
        else cout << min_str(X) << endl;
    }
    return 0;
}
