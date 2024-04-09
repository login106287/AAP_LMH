#include <bits/stdc++.h>
using namespace std;
#define ss set<string>

ss finds(string s) {
    ss subss;;
    for (int i = 0; i < s.size(); i++) {
        string temp = "";
        for (int j = i; j < s.size(); j++) {
            temp += s[j];
            subss.insert(temp);
        }
    }
    return subss;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("Xaythanh.inp","r",stdin);
    freopen("Xaythanh.out","w",stdout);
    string s;
    cin >> s;
    ss substrings = finds(s);
    cout << substrings.size();
    return 0;
}
