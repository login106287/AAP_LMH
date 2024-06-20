#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>
#define fi first
#define se second

struct points {
    ll x;
    ll y;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    fstream doc, ghi;
    doc.open("FIND.inp", ios::in);
    ghi.open("FIND.out", ios::out | ios::trunc);

    bool check;
    ll n, maxx=0, result;
    doc >> n;
    vector<points> p(n);
    ll minx=10e9, maxy=-10e9;


    for (ll i=0; i<n; i++) {
        doc >> p[i].x >> p[i].y;
        if (p[i].x<minx) minx=p[i].x;
        if (p[i].y>maxy) maxy=p[i].y;
    }
    for (ll i=1; i<n; i++) {
        for (ll j=0; j<n; j++) {
            if (p[i].x<p[j].y&&p[i].y>p[j].y) maxx = max((p[i].y-p[j].x),maxx);
        }
    }
    for (ll i=1; i<n; i++) {
        for (ll j=0; j<n; j++) {
            if (p[i].x==minx&&p[i].y==maxy) {
                check=true;
                result = p[i].y-p[i].x;
            }
        }
    }

    if (check) ghi << result;
    else ghi << maxx;

    doc.close();
    ghi.close();
    return 0;
}
