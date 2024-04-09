#include <bits/stdc++.h>
using namespace std;

int isBeatifulNum(int n) {
    int surplus, sum=0, count6=0;
    while (n!=0) {
        surplus = n%10;
        if (surplus==6) {
            count6++;
        }
        sum += surplus;
        n/=10;
    }
    if (count6>0 && sum%10==8) {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b,c=0;
    cin >> a >> b;
    for (int i=a; i<=b; i++) {
        if (isBeatifulNum(i)) {
            c++;
        }
    }
    cout << c;

    return 0;
}
