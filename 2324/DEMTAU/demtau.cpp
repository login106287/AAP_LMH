#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(NULL)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    long long sea[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> sea[i][j];
        }
    }
    long long result=0, counts=0, i=0;
    while (i<n) {
        if (sea[n][0]==1) counts ++;
    }
    result += counts;
    counts = 0;
    for (int i=1; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (sea[n][m]==sea[n][m+1]-1&&sea[n][m]==sea[n][m+1]-1&&sea[n][m]!=0) counts ++;
        }
    }
    result += counts;
    cout << result;

    return 0;
}
