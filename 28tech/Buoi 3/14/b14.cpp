#include <iostream>
using namespace std;

int main()
{
    long long int n;
    int le=0,chan=0,du;
    cin >> n;
    if (0<=n<=10e8) {
        while (n!=0) {
            du=n%10;
            if (du%2==0) {
                chan += du;
            }
            else {
                le += du;
            }
            n/=10;
        }
        cout << chan << " " << le;
    }

    return 0;
}
