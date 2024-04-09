#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    long long n,s=0;
    cin >> n;
    while (n!=0) {
        s+=n%10;
        n/=10;
    }
    cout << s;

    return 0;
}
