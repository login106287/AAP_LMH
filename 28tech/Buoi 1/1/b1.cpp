#include <iostream>
using namespace std;

int main()
{
    int a,b,nguyen,du;
    cin >> a;
    cin >> b;
    nguyen = a/b;
    du = a%b;
    cout << "\n" << nguyen << " " << du;
    return 0;
}
