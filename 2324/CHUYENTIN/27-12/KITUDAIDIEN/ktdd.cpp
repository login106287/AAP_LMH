#include <bits/stdc++.h>
using namespace std;

string newStr(string s) {
    string result = "";
    char prev = s[0];
    result += prev;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != prev) {
            result += s[i];
            prev = s[i];
        }
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);
        string result = newStr(s);
        cout << result << endl;
    }
    return 0;
}
