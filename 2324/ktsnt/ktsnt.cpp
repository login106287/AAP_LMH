#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("ktsnt.inp","r",stdin);
    freopen("ktsnt.out","w",stdout);
    int n, counts=0;
    cin >> n;
    if (n<2) cout << "False";
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) counts++;
    }
    if (counts!=0) cout << "False";
    else cout << "True";

    return 0;
}
