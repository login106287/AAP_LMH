#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vb vector<bool>
#define pii pair<ll, ll>
#define FOR(i,a,b,c) for (int i=(a),_b=(b);i<b;i+=c)
#define fi first
#define se second

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, counts=0, v=0;
    cin >> n;
    int a[n+1];
    vi value;
    FOR(i,0,n,1) {
        cin >> a[i];
        if (a[i]%3==0&&a[i]!=0) {
            counts++;
            value.push_back(a[i]);
        }
    }

    for (auto x:value) {
        x-=counts;
        v+=x;
    }

    cout << counts << "\n"<< v/3;;

    return 0;
}
