#include <iostream>

using namespace std;

void Fibonacci(int n) {
    int first_num = 0, second_num = 1, last_num;
    for (int i=3; i<=n; i++) {
        last_num = first_num + second_num;
        cout << last_num << " ";
        first_num = second_num;
        second_num = last_num;
    }

}

int main()
{
    int n;
    cin >> n;
    cout << 0 << " " << 1 << " ";
    Fibonacci(n);
    return 0;
}
