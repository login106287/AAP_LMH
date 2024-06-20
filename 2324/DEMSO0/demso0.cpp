#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, counts = 0;
    cin >> m >> n;
    for (int i=m; i <=n; i++) {
        string i1 = to_string(i);
        for (int j=0; j<i1.size();j++) {
            if (i1[j]=='0') counts ++;
        }
    }
    cout << counts;
    return 0;
}
