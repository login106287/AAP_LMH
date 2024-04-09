#include <iostream>
using namespace std;

int main()
{
    int n, f[100001], h[100001];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> n;
    }
    f[1] = h[1];
    f[2] = abs(h[2]-h[1])+f[1];
    for (int i=3; i<=n; ++i) {
        f[i] = min(abs(h[i] - h[i - 1]) + f[i - 1], abs(h[i] - h[i - 2]) + f[i - 2]);
    }
    cout << f[n];
    return 0;
}
