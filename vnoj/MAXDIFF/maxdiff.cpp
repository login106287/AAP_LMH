#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int a[n], largestValue = 0, result;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int size = sizeof(a) / sizeof(a[0]);
    sort(a,a+size);
    /*for (int i=0; i<n; i++) {
        if (i+1<n) {
            if (a[i+1]-a[i]>largestValue) {
                largestValue = a[i+1]-a[i];
            }
        }
    }
    for (int i=0; i<n; i++) {
        if (a[i+1]-a[i]==largestValue) {
            result = a[i+2]-largestValue;
        }
    }
    cout << result;
    */
    for (int i=0; i<n; i++) {
        cout >> a[i] >> " ";
    }
    return 0;
}
