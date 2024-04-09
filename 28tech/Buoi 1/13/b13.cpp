#include  <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b;

    if (a<=0 || b<=0) {
        return 0;
    }

    d = a%b;
    c = a-d;

    cout << c;

    return 0;
}
