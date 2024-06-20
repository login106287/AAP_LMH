#include <bits/stdc++.h>
#define vl vector<ll>
#define fi first
#define se second
#define FOR(i,a,b,c) for (int i=a; i<b; i+=c)
#define FOD(i,a,b,c) for (int i=a; i>b; i-=c)
#define endl "\n"
using namespace std;


main() {
    cin.tie(0)->sync_with_stdio(false);

    string s, temp="hello";
    cin >> s;

    int n=s.size();

    FOR(i,0,n,1) {
        if (s[i]==temp[0]) {
            temp.erase(0,1);
        }
    }

    if (temp.size()==0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
