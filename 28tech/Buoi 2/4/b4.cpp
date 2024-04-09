#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int a,b,k;
    cin >> a >> b >> k;
    if (1<=a<=10e9 || 1<=b<=10e9 || 1<=k<=10e9) {
        cout << a*ceilf(1.0*k/2) - b*floorf(1.0*k/2);
    }
    else {
        return 0;
    }

    return 0;
}
