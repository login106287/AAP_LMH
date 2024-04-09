#include <iostream>
using namespace std;

int main()
{
    long N;
    int C,S;
    cin >> N >> C >> S;
    if (1<=N<=10e9 && 1<=C<=10e5 && 1<=S<=1000) {
        cout << N*C-(S*(N/15));
    }

    return 0;
}
