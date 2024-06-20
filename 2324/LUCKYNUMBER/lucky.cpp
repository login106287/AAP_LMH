#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x;
    for(int i = 1; i <= 64; i++)
    {
        int p = pow(2, i);
        if (x > p) x-= p;
        else
        {
            n = i;
            break;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        int p = pow(2, n-i);
        if (x > p)
        {
            x -= p;
            cout << 7;
        }
        else cout << 4;
    }
}
