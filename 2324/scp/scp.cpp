#include <bits/stdc++.h>
using namespace std;

bool isSquareNumber(int n) {
    double x = 1.0*sqrt(1.0*n);
    if (x%1==0) return 1;
    else return 0;
}

int main()
{
    int n;
    vector<int>result;
    cin >> n;
    int a[n+5];
    for (int i=0; i<n; i++) {
        cin >> a[i];
        if (isSquareNumber(a[i])) result.push_back(a[i]);
    }
    for (auto x:result) cout << x << " ";
    return 0;
}
