#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    long long a,b,A,B;
    cin >> a >> b;
    A = (a%10*100)+(a/10%10*10)+(a/100);
    B = (b%10*100)+(b/10%10*10)+(b/100);
    if (A>B) {
        cout << A;
    }
    else {
        cout << B;
    }
    return 0;
}
