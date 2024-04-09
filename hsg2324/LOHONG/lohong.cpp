#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, counts=0;
    cin >> n;
    while (n!=0) {
        int d = n%10;
        if (d==0||d==4||d==6||d==9) counts ++;
        else if (d==8) counts+=2;
        n/=10;
    }
    cout << counts;

    return 0;
}
