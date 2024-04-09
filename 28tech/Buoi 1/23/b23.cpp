#include <iostream>
using namespace std;

char upper(char n) {
    if ('a' <= n && n <= 'z') {
        n = n - 32;
    }
    return n;
}

int main()
{
    char n;
    cin >> n;
    cout << upper(n);

    return 0;
}
