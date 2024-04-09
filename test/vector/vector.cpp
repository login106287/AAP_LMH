#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

bool dx(vi v, int n) {
    for (int i=0; i<n/2; i++) {
        if (v[i]!=v[n-(i+1)]) return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    if(dx(v,n)) cout << "HAH";
    else cout << "HUH";


    return 0;
}
