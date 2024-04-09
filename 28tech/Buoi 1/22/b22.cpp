#include <iostream>
using namespace std;

char lower(char n) {
    if ('A' <= n && n <= 'A') {
        n = n + 32;
    }
    return n;
}

int main()
{
    char n;
    cin >> n;
    cout << lower(n);

    return 0;
}
