#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n,m,a,cd = ceilf(1.0*n/a),cr = ceilf(1.0*n/a);
    cin >> n >> m >> a;
    cd = ceilf(1.0*n/a);
    cr = ceilf(1.0*m/a);

    if (1<=n || 1<=m || 1<=a || n<=10e9 || m<=10e9 || a<=10e9) {
        cout << cd*cr;
    }
    else {
        return 0;
    }
    return 0;
}
