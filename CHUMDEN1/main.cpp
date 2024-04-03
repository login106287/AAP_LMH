#include <bits/stdc++.h>
#define ll long long

#define vb vector<bool>
#define pii pair<ll, ll>
#define FOR(i,a,b,c) for (int i=(a),_b=(b);i<b;i+=c)
#define fi first
#define se second

using namespace std;


int counts(int n, int k, const vector<int> &a) {
    int cnt = 0;
    FOR(i,0,n,1) {
        int cnts = 0;
        for (int j=i; j<n && j<i+k; j++) {
            if (a[j]%2==1) cnts++;
        }
        if (cnts==k) cnt++;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,k;
    cin >> n >> k;
    vector<int> a(n);

    FOR(i,0,n,1) {
        cin >> a[i];
    }

    cout << counts(n,k,a);

    return 0;
}
