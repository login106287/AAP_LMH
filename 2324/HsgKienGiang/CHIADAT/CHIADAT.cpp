#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>

int solve(int n, int s, vi a) {
    int counts=0;
    sort(a.begin(),a.end(), greater<int>());
    while (!a.empty()) {
        int current=0;
        while (current+a[0] <= s/3) {
            current+=a[0];
            a.erase(a.begin());
            if (a.empty()) break;
        }
        counts++;
    }
    return counts;

}

int main()
{
    int n, s=0;
    cin >> n;
    vi a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
        s+=a[i];
    }
    if ((s/3)%10!=0) cout << -1;
    else {
        cout << solve(n,s,a);
    }


    return 0;
}
