#include <bits/stdc++.h>
using namespace std;

void solve(string S) {
    if (S.size()<10) cout << S << endl;
    else {
        cout << S[0]+to_string(S.size()-2)+S[(S.size())-1] << endl;
    }
}

int main()
{
    freopen("toolong71a.inp","r", stdin);
    freopen("toolong71a.out","w", stdout);
    int n;
    cin >> n;
    string S[n];
    for (int i=0; i<n; i++) {
        cin >> S[i];
    }
    for (int i=0; i<n; i++) {
        solve(S[i]);
    }

    return 0;
}
