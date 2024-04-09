#include <iostream>
#include <cmath>
using namespace std;

void toithieu(int a){
    int s;
    if (a%7<6) {
        s=(floorf(1.0*a/7))*2;
    }
    else {
        s=(floorf(1.0*a/7))*2+1;
    }
    cout << s << " ";
}

void toida(int a){
    int s;
    if (a%7==1) {
        s=(a/7)*2+1;
    }
    else {
        s=(ceilf(1.0*(a-1)/7))*2;
    }
    cout << s;
}

int main()
{
    int n;
    cin >> n;
    if (1<=n<=1000000) {
        toithieu(n);
        toida(n);
    }
    return 0;
}
