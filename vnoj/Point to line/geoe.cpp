#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double x, y, A, B, C, d;
    cin >> x >> y >> A >> B >> C;

    d = (abs(1.0*A*x+1.0*B*y+C))/sqrt(pow(1.0*A,2)+pow(1.0*B,2));
    cout << d;

    return 0;
}
