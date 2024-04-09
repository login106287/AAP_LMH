#include <iostream>
using namespace std;

void chanle(int n) {
    int du, chan=0, le=0;
    while (n!=0) {
        du = n%10;
        if (du%2==0) {
            chan ++;
        }
        else {
            le ++;
        }
        n/=10;
    }
    if (chan>le) {
        cout << "CHAN";
    }
    else if (le>chan) {
        cout << "LE";
    }
    else {
        cout << "BANG";
    }
}

int main()
{
    long long int n;
    cin >> n;
    if (0<n<=10e18) {
        chanle(n);
    }
    return 0;
}
