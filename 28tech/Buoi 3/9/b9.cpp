#include <iostream>
#include <cmath>
using namespace std;

int tong(int i) {
    int s=0;
    for (int j=0;j<=i;j++) {
        s+= pow(j,3);
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << tong(n);

    return 0;
}
