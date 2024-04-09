#include <iostream>
using namespace std;

int main()
{
    int n, tong = 0;
    cin >> n;

    while (n<0) {
        cout << "Please enter the number > 0: ";
        cin >> n;
    }

    for (int i = 0; i<n+1; i++){
        tong += i;
    }
    cout << tong;

    return 0;
}
