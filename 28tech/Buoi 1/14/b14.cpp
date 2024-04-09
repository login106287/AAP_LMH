#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b;
    if (a<=0 || b<=0) {
        return 0;
    }
    d=a%b;

    if (a%b==0) {
        c = a;
    }
    else {
        c = a+(b-d);
    }
    cout << c;


    return 0;
}
