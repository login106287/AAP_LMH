#include <bits/stdc++.h>
using namespace std;

void maxabs(int n) {
    int maxvalue=0, maxnum, lst[10000];
    for (int i=0; i<n; i++) {
        cin >> lst[i];
    }
    for (int j=0; j<n; j++) {
        if (abs(lst[j])>maxvalue) {
            maxvalue = abs(lst[j]);
            maxnum = lst[j];
        }
    }
    cout << maxnum;
}


int main()
{
//    freopen("bai2.inp","r", stdin);
//    freopen("bai2.out","w", stdout);
    int n;
    cin >> n;
    int lst[n];
    for (int i=0; i<n; i++) {
        cin >> lst[i];

    }
    maxabs(n);
    return 0;
}
