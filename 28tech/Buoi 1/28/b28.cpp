#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void nghiem(double a, double b, double c) {
    double d = pow(b,2) - 4*a*c;
    if (d<0) {
        cout << "NO";
    }
    else if (d==0) {
        cout << fixed << setprecision(2) << -b/(2*a);
    }
    else {
        cout << fixed << setprecision(2) << (-b + sqrt(d))/(2*a) << (-b - sqrt(d))/(2*a);
    }
}

using namespace std;

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    nghiem(a,b,c);

    return 0;
}
