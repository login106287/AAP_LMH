#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    double x1,x2,v1,v2;
    cin >> x1 >> x2 >> v1 >> v2;

    if (v1==v2) {
        if (x1==x2) cout << "0" << endl;
        else cout << "-1" << endl;
    }
    else {
        double t=(x2-x1)/(v1-v2);
        if (t>=0) cout << t << endl;
        else cout << "-1" << endl;
    }

    return 0;
}
