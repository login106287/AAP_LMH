#include <iostream>
using namespace std;

int main()
{
    int k,w;
    long long int n,amount=0,pay;
    cin >> k >> n >> w;

    if (1<=k<=1000 && 1<=w<=1000 && 0<=n<=10e9) {
        for (int i=0; i<=w; i++) {
            amount += k*i;
            if (n>amount) {
                pay = 0;
            }
            else {
                pay = amount-n;
            }
        }
        cout << pay;
    }
    else {
        return 0;
    }
    return 0;
}
