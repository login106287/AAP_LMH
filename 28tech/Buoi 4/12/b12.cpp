#include <bits/stdc++.h>
using namespace std;

int isFortuneNum(int m) {
    int result;
    while (m!=0) {
        if (m%10==6 || m%10==8 || m%10==0) {
            result = 1;
            return 1;
        }
        else {
            result = 0;
            return 0;
        }
        m/=10;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    cout << isFortuneNum(n);

    return 0;
}
