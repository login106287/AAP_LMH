#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int n;
    double tong = 0;

    cin >> n;
    while (n<=0) {
        return 0;
    }

    for (int i=1; i<=n; i++) {
        tong += 1.0/(i*(i+1));
    }

    cout << roundf(tong*100)/100 << endl;

    return 0;
}
