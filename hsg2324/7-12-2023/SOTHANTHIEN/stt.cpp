#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int soNguoc(int n) {
    int temp = n, new_num=0;
    while (temp!=0) {
        int du = temp%10;
        new_num*=10;
        new_num+=du;
        temp/=10;
    }
    return new_num;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    freopen("stt.inp","r",stdin);
    freopen("stt.out","w",stdout);

    int a, b, counts=0;
    cin >> a >> b;
    for (int i=a; i<=b; i++) {
        int dx = soNguoc(i);
        if (gcd(i,dx)==1) counts ++;
    }

    cout << counts;
    return 0;
}
