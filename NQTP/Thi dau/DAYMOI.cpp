#include <iostream>
using namespace std;

int main()
{
    long long n, max=0;
    cin >> n;
    long long a[n],b[n];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    for (int i=0;i<n;i++) {
        cin >> b[i];
    }
    for (int k=0;k<n;k++) {
        for (int j=0;j<=k;j++) {
            for (int i=0;i<=j;i++) {
                Max = max(Max, B[j]*A[i]);
            }
        }
        cout << Max << endl;
        Max = 0;
    }
    return 0;
}
