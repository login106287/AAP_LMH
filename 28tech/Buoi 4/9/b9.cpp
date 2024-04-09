#include <iostream>
#include <cmath>
using namespace std;

void isPrimeNumber(int a, int b) {
    for (int i=a; i<=b; i++) {
        int count = 0;
        for (int j=2; j<=sqrt(b);j++) {
            if (i%j==0) {
                count ++ ;
            }
        }
        if (count == 0) {
            cout << i << " ";
        }
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    isPrimeNumber(a,b);

    return 0;
}
