#include <iostream>
#include <fstream>
using namespace std;

int newStr(string s) {
    int n = s.length();
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = 0;
            while (j + k < n && s[i + k] == s[j + k]) {
                k++;
            }
            res = max(res, k);
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("substring.inp","r",stdin);
    //freopen("substring.out","w",stdout);

    int n;
    cin >> n;
    string s;
    cin >> s;

    cout << newStr(s);

    return 0;
}
