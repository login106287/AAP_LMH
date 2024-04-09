#include <iostream>
using namespace std;

void check(char n) {
    if (('0'<=n)&&(n<='9')){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

int main()
{
    char n;
    cin >> n;
    check(n);

    return 0;
}
