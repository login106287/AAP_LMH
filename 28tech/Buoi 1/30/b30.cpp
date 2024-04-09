#include <iostream>
using namespace std;

int main()
{
    long long int a,b,c;
    cin >> a >> b >> c;

    if (a/b==c || b/c==a || c/a==b) {
        cout << "/";
    }
    else {
        cout << "NOSOl";
    }

    return 0;
}
