#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("chia5nobetween.inp","r",stdin);
    freopen("chia5nobetween.out","w",stdout);
    int n;
    cin >> n;
    if (n%5==0&&n>=70&&n<=20) cout << "True";
    else cout << "False";

    return 0;
}
