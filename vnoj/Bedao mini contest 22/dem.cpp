#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,i,a[2000010],d=0;
map<ll,ll> dem;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for (i=1;i<=n;i++){
        cin>>a[i];
        a[i]%=23;
    }
    for (i=1;i<=n;i++){
        if (i>6){
            dem[a[i-6]]++;
        }
            d+=dem[a[i]];
    }
    cout<<d;
}
