#include <iostream>
#include <cmath>

using namespace std;

void check(int a, int b, int c) {
    if (a == b && b == c) {
        cout << 1;
    }
    else if (a == b || b == c || c == a) {
        cout << 2;
    }
    else if (pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(c,2) + pow(b,2) == pow(a,2)) {
        cout << 3;
    }
    else if ((a+b>c)&&(a+c>b)&&(b+c>a)) {
        cout << 4;
    }
    else {
        cout << "INVALID";
    }
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    check(a,b,c);

    return 0;
}
