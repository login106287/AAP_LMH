#include <bits/stdc++.h>
using namespace std;
#define ll long long

fstream doc,ghi;

int tong(ll n) {
    int s=0;
    while (n!=0) {
        s+=n%10;
        n/=10;
    }
    return s;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    doc.open("SODEP.INP", ios::in);
    ghi.open("SODEP.OUT", ios::out | ios::trunc);

    ll n;
    doc >> n;
    int s=tong(n);
    if (s%10==9) ghi << 1;
    else ghi << 0;

    doc.close(); ghi.close();
    return 0;
}
