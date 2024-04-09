#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int ab,bc,ca;
    cin >> ab >> bc >> ca;
    if (ab<=0 || ab>10e4 || bc<=0 || bc>10e4 || ca<=0 || ca>10e4) {
        return 0;
    }
    long long int V = sqrt(ab*bc*ca), a=V/bc, b=V/ca, c=V/ab;
    cout << a*4 + b*4 + c*4;

    return 0;
}
