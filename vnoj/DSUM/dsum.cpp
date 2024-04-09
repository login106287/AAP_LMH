#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int m,s=0;
    cin >> m;
    while (m!=0) {
        s+=m%10;
        m/=10;
    }
    cout << s;
    return 0;
}
