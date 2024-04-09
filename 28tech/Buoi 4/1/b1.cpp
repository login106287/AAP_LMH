#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNumber(int n) {
    if (n<2) {
        return 0;
    }
    for (int i=2;i<=sqrt(n);i++) {
        if (n%i==0) {
            return 0;
        }
        else {
            return 1;
        }
    }
}

int tong(int n) {
    int du,t=0;
    while (n!=0) {
        du=n%10;
        if (du<2) {
            return 0;
        }
        for (int i=2;i<=sqrt(du);i++) {
            if (du%i==0) {
                return 0;
            }
        }
        t+=du;
        n/=10;
    }
    return t;
}

int main()
{
    int n=0,du,a,b,t=0;
    cin >> a >> b;
    if (2<=a<b) {
        for (int i=a;i<=b;i++) {
            if (isPrimeNumber(i)){}
                if (isPrimeNumber(tong(i))){
                    cout << i << " ";
                    n+=1;
                }
            }
        cout << n;
        }
    return 0;
}
