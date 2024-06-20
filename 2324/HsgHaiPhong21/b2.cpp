#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

bool a[100006];

void sang(ll n){
    a[0]=0;
    a[1]=0;
    for (ll i=2; i<=n; i++) {
        a[i]=1;
    }
    for (ll i=2; i<=n; i++) {
        if (a[i]==1) {
            for (int j=2*i; j<=n; j+=i) {
                a[j]=0;
            }
        }
    }
}

bool isSpec(ll num) {
    if (a[num]){
        ll temp=num;
        bool check1, check2;
        for (int i=1; i<9; i++) {
            ll new_num = num*10+i;
            if (a[new_num]==1) check1=true;
        }
        while (temp!=0) {
            temp/=10;
            if (a[temp]==1) check2 = true;
        }
        if (check1==true&&check2==true) return true;
        else return false;
    }
}

void solve(ll l, ll r, vi v) {
    ll counts=0;
    for (ll i=v[l-1]; i<=v[r-1]; i++) {
        if (isSpec(i)) {
            cout << i << endl;
            counts++;
            break;
        }
    }
    cout << counts << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n, t;
    cin >> n;
    vi v(n);
    for (ll i=0; i<n; i++) cin >> v[i];
    sang(100006);

    cin >> t;
    vi x(t),y(t);
    for (ll j=0; j<t; j++) {
        cin >> x[j] >> y[j];
    }
    for (ll j=0; j<t; j++) {
        if (x[j]>y[j]) solve(y[j],x[j],v);
        else solve(x[j],y[j],v);
    }

    return 0;
}
