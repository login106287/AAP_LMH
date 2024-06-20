#include <bits/stdc++.h>
using namespace std;
#define ll long long

fstream doc, ghi;
ll n;
vector<ll> a, sang, dnt, luutam;

void taosang()
{
    sang.resize(10000, true);
    sang[0] = false; sang[1] = false;
    for (ll i = 2; i < 10000; i++) {
        if (sang[i]) {
            dnt.push_back(i);
            for (ll j = i*i; j < 10000; j+= i) {
                sang[j] = false;
            }
        }
    }
}
//------------------------------------------------
void pttsnt(ll x)
{
    luutam.clear();
    ll k, i = 0, tong = 1;
    while (x != 1) {
        k = 0;
        while (x % dnt[i] == 0) {
            x = x/dnt[i];
            luutam.push_back(dnt[i]);
            k++;
        }
        tong *= (k + 1);
        i++;
    }

    cout << tong << ' ';
    for (ll i = 0; i < luutam.size()-1; i++) cout << luutam[i] << '*';
    cout << luutam[luutam.size()-1] << endl;
}
//---------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
//    doc.open("pttsnt.inp", ios::in);
//    ghi.open("pttsnt.out", ios::out | ios::trunc);

    cin >> n;
    a.resize(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    taosang();
    for (ll i = 0; i < n; i++) pttsnt(a[i]);

//    cin.close(); cout.close();
    return 0;
}
