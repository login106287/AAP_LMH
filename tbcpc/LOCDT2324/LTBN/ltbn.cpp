#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, maxl=0 ,cl=1;
    cin >> n;
    int arr[n+7];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for (int i=1; i<n; i++) {
        if (arr[i]==arr[i-1]) {
            cl++;
        }
        else {
            maxl=max(maxl,cl);
        }
    }
    cout << maxl;

    return 0;
}
