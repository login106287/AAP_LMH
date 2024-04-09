#include <bits/stdc++.h>

#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pii pair<ll, ll>
#define FOR(i,a,b,c) for (int i=(a),_b=(b);i<b;i+=c)
#define fi first
#define se second

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;

    string new_s;
    FOR(i,0,s.size(),2) {
        int counts = s[i] - '0';
        char c = s[i + 1];
        new_s.append(counts, c);
    }

    int maxS = 0;
    int temp = 1;
    FOR(i,1,new_s.size(),1) {
        if (new_s[i] == new_s[i - 1]) temp++;
        else {
            maxS = max(maxS, temp);
            temp = 1;
        }
    }

    if (new_s.length() <= 1) maxS = new_s.length();
    else maxS = max(maxS, temp);

    cout << maxS << endl;

    return 0;
}
