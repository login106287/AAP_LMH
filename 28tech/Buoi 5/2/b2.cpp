#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    long long n;
    cin >> n;
    string stringN = to_string(n);
    long long s = stringN.size();
    cout << stringN[0] <<" "<< stringN[s-1];


    return 0;
}
