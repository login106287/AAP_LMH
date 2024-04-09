#include <iostream>
using namespace std;

int main()
{
    int M,N,S;
    cin >> M >> N;
    if (1<=M<=N<=16) {
        S = (M*N)/2;
        cout << S;
    }
    else {
        return 0;
    }

    return 0;
}
