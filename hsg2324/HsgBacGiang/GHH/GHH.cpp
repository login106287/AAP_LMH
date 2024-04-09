#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>

int tongUoc(int x) {
    int s=x+1;
    for (int i=2; i<=x/2; i++) {
        if (x%i==0) s+=i;
    }
    return s;
}

void solve(int x) {
    if (tongUoc(x)>=2*x) cout << 1 << endl;
    else cout << 0 << endl;
}

int main()
{
    int n, x;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> x;
        solve(x);
    }

    return 0;
}
