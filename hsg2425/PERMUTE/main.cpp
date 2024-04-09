#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define FOR(i,a,b) for (int i=(a),_b=(b);i<b;i++)
using namespace std;

void generatePermutations(vi &a, int l, int r) {
    if (l == r) {
        for (int x:a) cout << x << " ";
        cout << endl;
        return;
    }

    FOR(i,l,r+1) {
        swap(a[l],a[i]);
        generatePermutations(a, l+1, r);
        swap(a[l],a[i]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vi a(n);

    FOR(i, 1, n+1) {
        a[i-1] = i;
    }

    generatePermutations(a,0,n-1);

    return 0;
}
