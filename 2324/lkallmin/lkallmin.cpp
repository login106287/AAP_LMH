#include <bits/stdc++.h>
using namespace std;

bool isPrimeNumber(int n) {
    int counts =0;
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) counts++;
    }
    if (counts!=0) return 0;
    else return 1;

}

int main()
{
    freopen("lkallmin.inp","r",stdin);
    freopen("lkallmin.out","w",stdout);
    int n;
    cin >> n;
    for (int i=2; i<n; i++) {
        if (isPrimeNumber(i)) cout << i << endl;
    }
    return 0;
}
