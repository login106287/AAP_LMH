#include <bits/stdc++.h>

#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pii pair<ll, ll>
#define FOR(i,a,b,c) for (int i=(a),_b=(b);i<b;i+=c)
#define fi first
#define se second

using namespace std;

void solve(string s) {
    int max_v=0;
    string result="";
    int counts=1;
    FOR(i,1,s.size()+1,1) {
        if (s[i]==s[i-1]) counts++;
        else {
            result+=to_string(counts);
            counts=1;
            result+=s[i-1];
        }
    }
    cout << result;
    FOR(j,1,result.size()-1,2) {
        if (result[j]==result[j+2]) {
            int temp = (result[j-1]-'48') + (result[j+1]-'48');
            max_v = max(max_v, temp);
        }
    }
    //cout << max_v << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin >> s;

    solve(s);

    return 0;
}
