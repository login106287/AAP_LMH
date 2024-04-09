#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,t;
    long long int s;
    cin >> n >> t;
    if (1<=n<=100 && 2<=t<=10) {
        if (pow(10,n-1)*t<t || t==10)  {
            cout << -1;
        }
        else {
            s = pow(10,n-1)*t;
            cout << s;
        }
    }

    return 0;
}
