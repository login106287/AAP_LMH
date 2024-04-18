#include <bits/stdc++.h>
#define FOR(i,a,b,c) for (int i=(a),_b=(b); i<b;i+=c)
using namespace std;

int reverseNumber(int n) {
    int rev_num = 0;
    while (n>0) {
        rev_num+=rev_num*10+n%10;
        n/=10;
    }
    return rev_num;
}


int main()
{
    cin.tie(0)->sync_with_stdio(false);

    int a,b, counts=0;
    cin >> a >> b;
    FOR(i,a,b+1,1) {
        int k = reverseNumber(i);
        if (__gcd(i,k)==1) {
            cout << k << endl;
        }
    }
    cout << counts << endl;

    return 0;
}
