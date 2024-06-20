#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s;
    int k;
    cin >> s >> k;
    for (int i=0; i<s.size();i++) {
        if (s[i]-k<65) s[i]=s[i]+26-k;
        else s[i]-=k;
    }
    cout << s;

    return 0;
}
