#include <iostream>
using namespace std;

void solve(int t) {
    long long n[t];
    for (int i=0; i<t; i++) {
        cin >> n[i];
    }
    for (int i=0; i<t; i++) {
        if (n[i]%2==1) {
            cout << "Lihwy" << "\n";
        }
        else {
            cout << "FireGhost" << "\n";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    solve(t);
    return 0;
}
