#include <iostream>
using namespace std;

void check(char n) {
    if (('A'<=n)&&(n<='Z')) {
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
