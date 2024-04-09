#include <bits/stdc++.h>
using namespace std;

int isPrimeNum(int n) {
    int count = 0;
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) {
            count++;
        }
    }
    if (count == 0) {
        return 1;
    }return 0;
}

int main()
{
    /*freopen("NSNT","r",stdin);
    freopen("NSNT","w",stdout);*/
    long long i;
    cin >> i;
    string vi = to_string(i);
    while (vi.size()!=0) {
        if (isPrimeNum(stoi(vi))) {
            cout << stoi(vi) << endl;
        }
        vi.pop_back();
    }
    return 0;
}
