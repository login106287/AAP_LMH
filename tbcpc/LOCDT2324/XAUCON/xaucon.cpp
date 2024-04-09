#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    int n=s.size();
    int maxl=0 ,cl=1;

    for (int i=1; i<n; i++) {
        if (s[i]==s[i-1]&&s[i]=='0') {
            cl++;
        }
        else {
            maxl=max(maxl,cl);
        }
    }
    cout << maxl;

    return 0;
}
