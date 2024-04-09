#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; i++)
#define FORD(i,a,b) for(int i=(a),_b=(b); i>=_b; i--)
#define REP(i,a) for(int i=0,_a=(a); i<_a; i++)
#define FORN(i,a,b) for(int i=(a),_b=(b);i<_b;i++)
#define DOWN(i,a,b) for(int i=a,_b=(b);i>=_b;i--)
#define SET(a,v) memset(a,v,sizeof(a))
#define sqr(x) ((x)*(x))
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair

#define DEBUG(x) cout << #x << " = "; cout << x << endl;
#define PR(a,n) cout << #a << " = "; FOR(_,1,n) cout << a[_] << ' '; cout << endl;
#define PR0(a,n) cout << #a << " = "; REP(_,n) cout << a[_] << ' '; cout << endl;
using namespace std;

int sieve[3000111];
int nprime;
long long primes[3000111];
unsigned long long n;
int k;

void init() {
    FOR(i,2,1800) if (!sieve[i]) {
        int j = i*i;
        while (j <= 3000000) {
            sieve[j] = 1;
            j += i;
        }
    }

    FOR(i,2,3000000) if (!sieve[i]) {
        ++nprime;
        primes[nprime] = i;
    }
}

void solve() {
    unsigned long long res = 0;

    FOR(i,1,nprime-k+1) {
        unsigned long long prod = 1LL;
        bool overflow = false;
        FOR(j,i,i+k-1) {
            if (prod > n/primes[j]) {
                overflow = true;
                break;
            }
            prod = prod * primes[j];
        }

        if (!overflow && prod <= n) {
            if (prod > res) res = prod;
        }
    }

    if (!res) cout << -1 << endl;
    else cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    init();
    int ntest; cin >> ntest;
    while (ntest--) {
        cin >> n >> k;
        solve();
    }
    return 0;
}
