#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>

bool check(string s) {
    for (int i=1; i<s.size(); i+=3) {
        if (s[i]!=s[i+1]||s[i]!=s[i+1]) return 0;
    }
    return 1;
}

int main()
{
    int n, counts=0;
    string s;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> s;
        if (check(s)) counts++;
    }
    cout << counts;

    return 0;
}
