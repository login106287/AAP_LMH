#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, count;
    cin >> n;
    count = ceil(1.0*n/4096);
    cout << count*4;

    return 0;
}
