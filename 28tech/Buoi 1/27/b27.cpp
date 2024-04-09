#include <iostream>
using namespace std;

int main()
{
    int n,d,w,y;
    cin >> n;
    if (n<=0) {
        return 0;
    }
    y = n/365;
    w = (n - (y*365))/7;
    d = n - (y*365) - (w*7);

    cout << y << " " << w << " " << d << endl;

    return 0;
}
