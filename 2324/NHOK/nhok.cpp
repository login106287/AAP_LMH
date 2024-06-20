#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, pos;
    cin >> n>> pos;
    vi a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end(),greater<int>());
    cout << a[pos-1];

    return 0;
}
