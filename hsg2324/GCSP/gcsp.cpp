#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, counts=0;
    cin >> n >> k;
    while (n>k) {
        k*=2;
        counts++;
    }
    cout << counts;
    return 0;
}
