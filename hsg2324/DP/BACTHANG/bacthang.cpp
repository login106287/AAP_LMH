#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>



int main()
{
    int n;
    cin >> n;
    vi f;
    f[2]=1;
    f[3]=2;
    for (int i=4; i<=n; i++) {
        f[i]=f[i-1]+f[i-2];
    }
    cout << f[n];


    return 0;
}
