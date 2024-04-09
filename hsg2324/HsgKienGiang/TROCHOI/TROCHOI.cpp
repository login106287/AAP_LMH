#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int counts(int i, vi a) {
    int counts=0;
    for (int j=0; j<a.size(); j++) {
        if (a[j]==i) counts++;
    }
    return counts;
}

int main()
{
    int n, dem=0;
    cin >> n;

    vi a(n),v;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) {
        if (dem<counts(a[i],a)) {
            v.push_back(a[i]);
            dem=counts(a[i],a);
        }
    }
    cout << v[v.size()-1] << ' ' << dem;

    return 0;
}
