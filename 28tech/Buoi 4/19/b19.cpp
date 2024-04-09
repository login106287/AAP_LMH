#include <iostream>
#include <vector>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        return true;
    }
    return false;
}

void findNumbers(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    findNumbers(a, b);

    return 0;
}
