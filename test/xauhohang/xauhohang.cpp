#include <iostream>
#include <string>
using namespace std;

int main() {
    string S1, S2;
    cin >> S1 >> S2;

    int res = 0;

    // Kiểm tra xóa các kí tự trong S1
    for (char c1 : S1) {
        if (S2.find(c1) == string::npos) {
            res++;
        }
    }

    // Kiểm tra xóa các kí tự trong S2
    for (char c2 : S2) {
        if (S1.find(c2) == string::npos) {
            res++;
        }
    }
    cout << res << endl;

    return 0;
}
