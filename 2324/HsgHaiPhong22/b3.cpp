#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define fi first
#define se second

bool solve(int n, int x, int t) {
    int total=0;
    for (int i=0; i<n; i++) {
        total+=min(t/(i+1), (int)x);
    }
    return total>=x;
}

int main() {
    int n, x;
    cin >> n >> x;
    int maxt = 0;
    vector<pii> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i].fi >> a[i].se;
        maxt = max(maxt, a[i].fi*x+a[i].se);
    }
    int l=0, r=maxt;
    int result = -1;
    while (l<=r) {
        int m=l+(r-l)/2;
        if (solve(n, x, m)) {
            result=m;
            r=m-1;
        }
        else l=m+1;
    }
    cout << result;
    return 0;
}
