#include <bits/stdc++.h>
using namespace std;
#define ll long long

int chuso(int i) {
    int counts=0;
    while (i!=0) {
        counts++;
        i/=10;
    }
    return counts;
}

int counts(int n) {
    n+=3;
    int i=1, dem=0;
    while (n!=0) {
        n-=chuso(i);
        dem+=chuso(i);
        i++;
    }
    return i-1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, s=0;
    cin >> n;

    cout << counts(n);

    return 0;
}
