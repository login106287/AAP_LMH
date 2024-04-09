#include <iostream>
#include <math.h>
using namespace std;

void tsnt(int n) {
    int i = 2;
    while (n != 1) {
        while (n % i != 0) {
            i++;
        }
        if (n%i==0) {
            cout << i << " ";
            n/=i;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    tsnt(n);

    return 0;
}
