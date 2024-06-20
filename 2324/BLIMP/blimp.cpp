#include <bits/stdc++.h>
using namespace std;

bool isBlimp(string s) {
    int n = s.size(), counts=0;
    for (int i=0; i<n-2; i++) {
        if (s.substr(i,3)=="FBI") counts++;
    }
    if (counts!=0) return 1;
    else return 0;
}

int main()
{
    freopen("blimp.inp","r",stdin);
    freopen("blimp.out","w",stdout);
    int n, counts=0;
    vector<int> result;
    string s[17];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> s[i];
    }
    for (int i=0; i<n; i++) {
        if (isBlimp(s[i])) {
            result.push_back(i+1);
            counts++;
        }
    }
    if (counts ==0) cout << "GO";
    else {
        for (auto x:result) cout << x << " ";
    }

    return 0;
}
