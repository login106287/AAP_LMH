#include <iostream>
#include <string>
using namespace std;

void check(string A, string B) {
    string littleStr;
    int count = 0;
    for (int x = 1; x <= B.length(); x++) {
        for (int i = x; i <= x + A.length(); i++) {
            littleStr += B[i];
        }
        count ++;
        if (littleStr == A) {
            cout << count << " ";
        }
    }
}

int main()
{
    string A, B;
    cin >> A >> B;
    check(A,B);

    return 0;
}
