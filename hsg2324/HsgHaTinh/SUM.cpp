#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

bool check(int n, vi a, int l, int r) {
    ll s=0;
    if (l<=r) {
        for (int i=l; i<=r; i++) s+=a[i];
    }
    if (s==0) return 1;
    else return 0;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, counts=0;
    cin >> n;
    vi a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        for (int j=1; j<n; j++) {
            if (check(n,a,i,j)&&(i<=j)) {
                counts++;
            }
        }
    }
    cout << counts;
    return 0;
}
