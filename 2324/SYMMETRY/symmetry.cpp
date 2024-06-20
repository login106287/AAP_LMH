#include <bits/stdc++.h>
using namespace std;

bool doixung(string S) {
    int n = S.size();
    for (int i=0; i<n; i++) {
        if (S[i]!=S[n-(i+1)]) return 0;
    }
    return 1;
}

int main()
{
    int n, counts = 0;
    cin >> n;
    string S = to_string(n);
    vector<int> result;
    if (doixung(S)) cout << 1;
    else cout << 0;

    return 0;
}
