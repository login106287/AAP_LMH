#include <iostream>
using namespace std;

int main()
{
    long long int n;
    int s=0;
    cin >> n;
    if (0<=n<=18) {
        while (n!=0) {
            s++;
            n/=10;
        }

        cout << s;
    }

    return 0;
}
