#include <bits/stdc++.h>
using namespace std;

void factorial(long long n) {
    int s=1;
    while (n!=0) {
        s*=n;
        n--;
    }
    cout << s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long n;
    cin >> n;
    factorial(n);

    return 0;
}
