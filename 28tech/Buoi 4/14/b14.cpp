#include <bits/stdc++.h>
using namespace std;

int productNumber(int m) {
    long long product = 1;
    while(m!=0) {
        product *= m%10;
        m/=10;
    }
    return product;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long m;
    cin >> m;
    cout << productNumber(m);

    return 0;
}
