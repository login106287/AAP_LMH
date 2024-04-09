#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    if (0<n<=10000 && 1<m<=10) {
        if (n<m) {
            cout << -1;
        }
        else {
            cout << ceilf(1.0*n/(m*2))*m;
        }
    }

    return 0;
}
