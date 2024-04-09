#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    long long g=0,r=0,y=0;
    for (int i=0; i<S.size(); i++) {
        if (S[i]=='G') g++;
        else if (S[i]=='R') r++;
        else if (S[i]=='Y') y++;
    }
    if (g>0&&r>0&&y>0&&g==r==y) cout << "YES";
    else cout << "NO";

    return 0;
}
