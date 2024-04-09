#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    long long n,max,min;
    cin >> n;
    long long a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
        max = a[0]; min=a[0];
    }
    for (int i=0; i<n; i++) {
        if (i>max) {
            max=i;
        }
        if (min>i) {
            min=i;
        }
    }

    cout << max-min;
    return 0;
}
