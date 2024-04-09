#include <bits/stdc++.h>
using namespace std;

string findString(string S) {
    int n = S.length();

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            bool is_divisor = true;
            string sub_string = S.substr(0, i);

            for (int j = i; j < n; j += i) {
                if (S.substr(j, i) != sub_string) {
                is_divisor = false;
                break;
                }
            }

            if (is_divisor) return sub_string;
        }
    }

    return S;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string S;
    cin >> S;
    cout << findString(S) << endl;

    return 0;
}
