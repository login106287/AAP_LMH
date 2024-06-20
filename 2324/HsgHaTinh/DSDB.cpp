#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

void xoa(vi a, ll l, ll r) {
    while (a[l]!=a[r]) {
        a.pop_back();
        r-=1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, counts=0;
    cin >> n;
    vi a(n);
    int temp = a.size();
    for (ll i=0; i<n; i++) {
        cin >> a[i];
    }
    for (ll i=0; i<n/2; i++) {
        if (a[i]!=a[n-(i+1)]) {
            a.resize(n+1);
            n++;
            counts++;
            a.emplace(a.begin()+n-(1+i),a[i]);
        }
    }
    a.pop_back();
    cout << a.size() - temp;
}
