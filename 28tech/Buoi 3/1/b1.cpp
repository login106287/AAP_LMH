#include <iostream>
using namespace std;

int main()
{
    int n,s=0;
    cin >> n;

    if (n>0) {
        for (int i=0; i<=n; i++) {
            s+=i;
        }
        cout << s;
    }
    else {
        return 0;
    }
    return 0;
}
