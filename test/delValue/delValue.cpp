#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    a.erase(remove_if(a.begin(), a.end(), [&b](int num){
        return find(b.begin(), b.end(), num) != b.end();
    }), a.end());

    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
