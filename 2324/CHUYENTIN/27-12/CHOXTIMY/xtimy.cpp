#include <bits/stdc++.h>
using namespace std;

int solve(int X) {
    string strX = to_string(X);
    string strY = string(strX.rbegin(), strX.rend());
    int Y = stoi(strY);
    return Y % 19;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int X;
    cin >> X;
    int result = solve(X);
    cout << result << endl;
    return 0;
}
