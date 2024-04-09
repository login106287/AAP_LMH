#include <iostream>
using namespace std;

int main()
{
    int n, tong = 0;
    cin >> n;
    while (n<=0) {
        return 0;
    }

    for (int i=1; i<=n; i++) {
        tong += 2*i;
    }
    cout << tong;

    return 0;
}
