#include <iostream>
using namespace std;

void solve(long long n){
    int A[n],count=0;
    for (int i=0; i<n; i++) {
        cin >> A[i];
    }
    for (int i=0; i<n; i++) {
        if (A[i]<A[i+1]) {
            count ++;
        }
    }
    cout << count;
}

int main()
{
    long long n;
    cin >> n;
    solve(n);

    return 0;
}
