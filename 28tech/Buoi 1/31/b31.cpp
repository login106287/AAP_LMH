#include <iostream>
using namespace std;

void ketqua(double a1, double a2, double b, double c) {
    double tb = a1 + a2 + b*2 + c*3;
    if (tb>=8) {
        cout << "GIOI";
    }
    else if (tb<8 || tb>=6.5) {
        cout << "KHA";
    }
    else if (tb<6.5 || tb>=5) {
        cout << "TRUNG BINH";
    }
    else {
        cout << "YEU";
    }
}

int main()
{
    double a1,a2,b,c;
    cin >> a1 >> a2 >> b >> c;
    if (a1<=0 || a2<=0 || b<=0 || c<=0) {
        return 0;
    }
    ketqua(a1,a2,b,c);

    return 0;
}
