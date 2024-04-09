#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    for (int i=2; i<=n/2; i++) {
        if (n%i==0) {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    solve (n);
    return 0;
}
