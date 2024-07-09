#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);
    freopen("QUANCO.INP","r",stdin);
    freopen("QUANCO.OUT","w",stdout);
    vector<string> input(8);
    for (int i = 0; i < 8; ++i) cin >> input[i];

    int result = 0;
    for (int col = 0; col < 8; ++col) {
        int count = 0;
        for (int row = 0; row < 8; ++row) {
            if (input[row][col] == '1') count++;
            else {
                result = max(result, count);
                count = 0;
            }
        }
        result = max(result, count);
    }

    for (int row = 0; row < 8; ++row) {
        int count = 0;
        for (int col = 0; col < 8; ++col) {
            if (input[row][col] == '1') count++;
            else {
                result = max(result, count);
                count = 0;
            }
        }
        result = max(result, count);
    }

    for (int k = 0; k < 8; ++k) {
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < 8 - k; ++i) {
            if (input[i][i + k] == '1') count1++;
            else {
                result = max(result, count1);
                count1 = 0;
            }
            if (input[i + k][i] == '1') count2++;
            else {
                result = max(result, count2);
                count2 = 0;
            }
        }
        result = max({result, count1, count2});
    }

    cout << result;

    return 0;
}
