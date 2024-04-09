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
    vector<int> result;
    string S;
    for (int i=0; i<n; i++) {
        cin >> S;
        if (doixung(S)) {
            counts ++;
            result.push_back(i+1);
        }
    }
    cout << counts << endl;
    for (auto x:result)
        cout << x << " ";

    return 0;
}
