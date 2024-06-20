#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, l, counts=0;
    cin >> n >> l;
    vi a(n+1);
    for (int i=0; i<n; i++) {
        cin >> a[i];
        if (a[i]>=l) counts++;
    }
    cout << counts;
    return 0;
}
