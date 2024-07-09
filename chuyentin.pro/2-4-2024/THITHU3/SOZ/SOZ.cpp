#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x==y) cout << x+y-1
    else cout << max(x,y);

    return 0;
}
