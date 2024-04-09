#include <iostream>
using namespace std;

int main()
{

    long long int n;
    cin >> n;
    int chan=0,le=0,du;
    if (0<=n<=10e18) {
        while (n!=0) {
            du = n%10;
            if (du%2==0) {
                chan+=1;
            }
            else {
                le+=1;
            }
            n/=10;
        }
        cout << chan << " " << le;
    }

    return 0;
}
