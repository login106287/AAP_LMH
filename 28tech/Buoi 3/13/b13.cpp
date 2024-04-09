#include <iostream>
using namespace std;

int main()
{
    long long int n;
    int s=0,tach;
    cin >> n;
    if (0<=n<=10e18) {
        while (n!=0) {
            tach=n%10;
            n/=10;
            s+=tach;
        }
        cout << s;
    }
    return 0;
}
