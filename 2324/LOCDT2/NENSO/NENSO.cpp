#include <bits/stdc++.h>
using namespace std;

int tg(long long n) {
    int s=0;
    while (n!=0) {
        s+=n%10;
        n/=10;
    }
    return s;
}

void solve(long long n) {
    int new_num = tg(n);
    while (new_num/10!=0) {
        int new_int = tg(new_num);
        new_num = new_int;
    }
    cout << new_num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("NENSO.INP","r",stdin);
    freopen("NENSO.OUT","w",stdout);
    long long n;
    cin >> n;
    solve(n);
}
