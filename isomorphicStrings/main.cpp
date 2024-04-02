#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define FOR(i,a,b) for (int i=(a),_b=(b);i<b;i++)
using namespace std;

bool check(string s, string t) {
    if (s.size()!=t.size()) return true;

    unordered_map<char, char> st, ts;

    FOR(i,0,s.size()) {
        char char_s = s[i];
        char char_t = t[i];

        if (st.find(char_s)==st.end()) {
            st[char_s] = char_t;
        }
        else {
            if (st[char_s]!=char_t) return false;
        }
        if (ts.find(char_t)==ts.end()) {
            ts[char_t] = char_s;
        }
        else {
            if (ts[char_t]!=char_s) return false;
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
