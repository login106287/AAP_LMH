#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("SEQ.INP","r",stdin);
    freopen("SEQ.OUT","w",stdout);
    cin.tie(0)->sync_with_stdio(false);
    vector<int>result={};
    long long n, Q,max=0, counts=0;
    cin >> n >> Q;
    long long a[n+7], k[Q+7];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int j=0; j<Q; j++) {
        cin >> k[j];
        if (k[j]>a[n]&&k[j]>a[n-1]) max ++;
        for (int i=0; i<n; i++) {
            if (k[j]>a[i]) max ++;
        }
        result.push_back(max);
        max =0;
        counts =0;
    }
    for (auto x:result) cout << x << endl;
    return 0;
}
