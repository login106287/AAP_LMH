#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int x1,x2,y1,y2;
    double d;
    cin >> x1 >> x2 >> y1 >> y2;
    d = sqrt(pow(y1-x1,2)+pow(y2-x2,2));
    cout << fixed << setprecision(2) << d << endl;

    return 0;
}
