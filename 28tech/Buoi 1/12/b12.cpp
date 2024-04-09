#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n, tong=0;
    cin >> n;
    while (n<=0) {
        return 0;
    }

    for (int i=1; i<=n; i++) {
        tong += pow(-1,i)*i;
    }

    cout << tong;

    return 0;
}
