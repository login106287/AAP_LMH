#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int swap(long int n) {
    long int new_num;
    string new_string;
    vector<int> A;
    while(n!=0) {
        A.push_back(n%10);
        n/=10;
    }
    sort(A.begin(), A.end());
    for (int j=0; j<A.size(); j++) {
        new_string += to_string(A[j]);
    }
    new_num = stoi(new_string);
    return new_num;
}

int main()
{
    long int n;
    cin >> n;
    long int F[n];
    F[1] = 1;
    for (int i=2; i<=n; i++) {
        F[i]= F[i-1]*2;
        F[i]= swap(F[i]);
    }
    cout << F[n];

    return 0;
}
