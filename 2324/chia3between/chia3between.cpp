#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("chia3between.inp","r",stdin);
    freopen("chia3between.out","w",stdout);
    int n;
    cin >> n;
    if (n%3==0&&n>=50&&n<=100) cout << "True";
    else cout << "False";

    return 0;
}
