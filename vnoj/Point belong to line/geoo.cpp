#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long x, y, A, B, C, d;
    cin >> x >> y >> A >> B >> C;
    d = (abs(A*x+B*y+C))/(sqrt(pow(A,2)+pow(B,2)));
    if (d==0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
