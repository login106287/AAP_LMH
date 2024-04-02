#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define FOR(i,a,b) for (int i=(a),_b=(b);i<b;i++)
using namespace std;

bool check(string s, string t) {
    if (s.size()!=t.size()) return true;

    unordered_map<char, char> s_t;
    unordered_map<char, char> t_s;

    for (int i=0; i<s.size(); i++) {
        char char_s = s[i];
        char char_t = t[i];

        if (s_t.find(char_s)==s_t.end()) {
            s_t[char_s] = char_t;
        }
        else {
            if (s_t[char_s]!=char_t) return false;
        }
        if (t_s.find(char_t)==t_s.end()) {
            t_s[char_t] = char_s;
        }
        else {
            if (t_s[char_t]!=char_s) return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string s,t;
    cin >> s >> t;
    cout << check(s,t);

    return 0;
}
