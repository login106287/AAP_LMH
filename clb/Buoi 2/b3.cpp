#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c,d;
    cin >> a;
    cin >> b;
    cin >> c;
    d = pow(b,2)-4*a*c;
    if (d>0)
    {
        cout << (-b+sqrt(d))/2*a << " " << (-b-sqrt(d))/2*a;
    }
    if (d<0)
    {
      cout << "Vo nghiem";
    }
    else
    {
        cout << -b/2*a;
    }
    return 0;
}
