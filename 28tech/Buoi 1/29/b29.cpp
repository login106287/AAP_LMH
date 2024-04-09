#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a,b;
    int c=0;
    cin >> a >> b;
    for (int i=ceilf(a); i<=floorf(b); i++) {
        c++;
    }
    cout << c;
    return 0;
}
