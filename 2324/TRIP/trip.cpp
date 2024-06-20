#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int counts(int &n, int &d, vi &a) {
    int counts=0;
    while (a.size()) {
        int temp=d;
        while (temp>0) {
            for (int i=0; i<n; i++) {
                if (temp-a[i]>0) {
                   temp -= a[i];
                   a.erase(i);
                }
            }
        }
        counts++;
    }
    return counts;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, d;
    cin >> n >> d;
    vi a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end(),greater<int>());
    cout << counts(n,d,a);

    return 0;
}
