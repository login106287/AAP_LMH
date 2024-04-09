#include <iostream>
#include <cmath>
using namespace std;

int isPrimeNumber(int n) {
    if (n<2) {
        return 0;
    }
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) {
            return 0;
        }
        else {
            return i;
        }
    }
}

int main()
{
    long long int n;
    int max=0,dem=0;
    cin >> n;
    if (2<=n) {
        for (int i=2;i<=n;i++) {
            if (isPrimeNumber(i)) {
                if (i>=max && i+2<=n) {
                    max = i;
                }
            }
        }
        if (n%2==0) {
            for (int j=1; j<=n/2; j++) {
                dem++;
            }
            cout << dem << endl;
            for (int i=1; i<=n/2; i++) {
                cout << 2 << " ";
            }
        }
        else {
            for (int j=1; j<=(n/2)-1; j++) {
                dem++;
            }
            dem++;
            cout << dem << endl;
            for (int i=1; i<=(n/2)-1; i++) {
                cout << 2 << " ";

            }
            cout << 3;

        }
    }

    return 0;
}
