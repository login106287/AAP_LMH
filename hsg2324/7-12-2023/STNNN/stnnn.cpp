#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> vi(n);
    for (int i=0; i<n; i++) cin >> vi[i];
    sort(vi.begin(),vi.end());
    int vend = vi[n-1];
    for (int j=0; j<vend; j++) {
        if (j<vi[j]) {
            cout << j;
            break;
        }
    }
    return 0;
}
