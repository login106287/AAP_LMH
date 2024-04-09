#include <iostream>
using namespace std;

void chanle(long long n){
    int chan=0, le=0;
    int du;
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
    cout << chan << " " << le;
}

int main()
{
    long long n;
    cin >> n;
    chanle(n);

    return 0;
}
