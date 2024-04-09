#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, tong = 0;
    cin >> n;

    while (n<0) {
        cout << "Please enter the number > 0: ";
        cin >> n;
    }
    for (int i=0; i<n+1; i++) {
        tong += pow(i,2);
    }
    cout << tong;

    return 0;
}
