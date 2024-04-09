#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define fi first
#define se second

bool check(int t, int value) {
    if (t%10==0) return 0;
    vi lst_v,lst_t;
    int counts=0;

    while (value!=0) {
        lst_v.push_back(value%10);
        value/=10;
    }
    while (t!=0) {
        lst_t.push_back(t%10);
        t/=10;
    }
    for (int i=0; i<lst_v.size(); i++) {
        if (lst_t[i]!=lst_v[i]) counts++;
    }
    if (counts!=0) return 0;
    else return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n,counts=0,result=0;
    cin >> n;
    int a[n+1];
    for (int i=1; i<=n; i++) {
        cin >> a[i];
        for(int j=1; j<=a[i]; j++) {
            if (check(i,j)) {
                counts++;
            }
        }
    }
    cout << counts;

    return 0;
}
