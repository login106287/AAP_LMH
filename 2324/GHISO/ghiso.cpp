#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, steps=0;
    cin >> N;
    while (N!=0) {
        if (N%2==0) N/=2;
        else N--;
        steps++;
    }
    cout << steps;
    return 0;
}
