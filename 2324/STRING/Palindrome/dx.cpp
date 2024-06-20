#include <bits/stdc++.h>
using namespace std;

string newStr(string s) {
    for (int i=0; i<s.size(); i++) {
        if (s[i]==' ') s.erase(s.begin()+i);
    }
    return s;
}

bool doixung(string S) {
    int n = S.size();
    for (int i=0; i<n; i++) {
        if (S[i]!=S[n-(i+1)]) return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string s;
    int counts=0;
    getline(cin,s);
    string new_str = newStr(s);

    if (doixung(new_str)) cout << "YES";
    else cout << "NO";

    return 0;
}
