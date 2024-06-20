#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;
    vi v;

    for (int i=1; i<=int(sqrt(n)); i++) {
        if (n%i==0) {
            if (i*i<n) {
                v.push_back(i);
                v.push_back(n/i);
            }
            else v.push_back(i);
        }
    }
    sort(v.begin(),v.end());
    for (auto x:v) cout << x << " ";

    return 0;
}
