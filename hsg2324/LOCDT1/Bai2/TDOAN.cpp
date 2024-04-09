#include <bits/stdc++.h>
using namespace std;

void solve(arr[], int n, int k) {
    int s=0, counts=0;
    vector<int>result={};
    for (int i=0; i<n; i++) {
        s+=arr[i]; counts ++;
        if (s<k) {
            for (int i=1; i<n; i++) {
                s+=arr[i];
                counts++;
                if (s>k) return 0;
                if (s==k) result.push_back(counts);
            }
    }
}

int main()
{
    freopen("TDOAN.INP","r",stdin);
    freopen("TDOAN.OUT","w",stdout);
    int n,k,a[2007];
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    solve(a[i],n,k);

    return 0;
}
