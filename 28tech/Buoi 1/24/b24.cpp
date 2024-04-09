#include <iostream>
using namespace std;

char nextchar(char n) {
    if ('A' <= n && n < 'Z') {
        n += 33;
    }
    else if (n == 'Z') {
        n = 'a';
    }
    return n;
}

int main()
{
    char chr;
    cin >> chr;

    if (('a' <= chr && chr <= 'z') || ('A' <= chr && chr <= 'Z')) {
        cout << nextchar(chr);
    }
    else {
        cout << "INVALID";
    }

    return 0;
}
