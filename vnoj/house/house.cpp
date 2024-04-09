#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    int c[n];
    int min = 1000001, max = 0, position;
    for (int i=0; i<n; i++) {
        cin >> c[i];
        if (c[i]>max) {
            max = c[i];
        }
    }
    for (int j=0; j<(sizeof(c)/sizeof(*c)); j++){
        if (max == c[j]) {
            position = j;
        }
    }
    for (int k = position; k<(sizeof(c)/sizeof(*c)); k++) {
        if (c[k]<min){
            min = c[k];
        }
    }
    if (max==c[sizeof(c)/sizeof(*c)-1]) {
        cout << "Lo nang roi!";
    }
    else {
        cout << max - min;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    solve(n);
    return 0;
}
