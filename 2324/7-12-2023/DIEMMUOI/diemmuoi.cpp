#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);
    int n, counts=0;
    cin >> n;
    double points[n];
    for (int i=0; i<n; i++) {
        cin >> points[i];
        if (points[i]==10.0) counts++;
    }
    cout << counts;

    return 0;
}
