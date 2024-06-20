#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    getline(cin, s);
    int counts=0;

    for (int i=0; i<s.size(); i++) {
        if (isdigit(s[i])) counts++;
    }
    cout << counts;
    return 0;
}
