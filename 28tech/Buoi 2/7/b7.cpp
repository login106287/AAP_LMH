#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n,S;
    cin >> n >> S;
    if (1<=n<10e9 && 1<=S<=10e9) {
        cout << ceilf(1.0*S/n);
    }
    else {
        return 0;
    }
    return 0;
}
