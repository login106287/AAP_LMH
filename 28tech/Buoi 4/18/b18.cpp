#include <bits/stdc++.h>
using namespace std;

void isPerfectNum(int n) {
    int s=0;
    for (int i = 2; i <= n; i++) {
        if (n%i==0) {
            s+=n/i;
        }
    }
    if (s<=n) {
        cout << 1;
    }
    else {
        cout << 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    isPerfectNum(n);

    return 0;
}
