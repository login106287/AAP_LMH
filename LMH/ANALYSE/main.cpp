#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define FOR(i,a,b) for (int i=(a),_b=(b);i<b;i++)
using namespace std;

void analyse(int n, vector<int>& current, int max_num = 0) {
    if (n == 0) {
        FOR(i,0,current.size()) {
            if (i > 0) cout << "+";
            cout << current[i];
        }
        cout << endl;
        return;
    }

    FOR(i,1,n+1) {
        if (i >= max_num) {
            current.push_back(i);
            analyse(n - i, current, i);
            current.pop_back();
        }
    }
}

void result(int temp, int n) {
    vi current;
    analyse(n, current);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int temp = n;
    cout << n << " = ";

    result(n);

    return 0;
}
