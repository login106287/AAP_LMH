#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, s=0, steps=0;
    cin >> n;
    long long a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
        s+=a[i];
    }
    if (s%n!=0) cout << -1;
    else {
        long long tb = s/n;
        for (int i=0; i<n; i++) {
            if (a[i]>tb) steps += a[i]-tb;
        }
        cout << steps;
    }

    return 0;
}
