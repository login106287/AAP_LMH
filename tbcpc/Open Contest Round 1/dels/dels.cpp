#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string s, p, newString; int no;
    vector<ll> n;
    cin >> s >> p >> no;
    ll ssize = s.size(), du, lst[ssize], count=0;
    while (no!=0) {
        du=no%10;
        n.push_back(du);
        no/=10;
    }
    for (auto j=n.rbegin(); j!=n.rend(); ++j) {
        newString = s.erase(*j-1);
        cout << newString << endl;
    }
    return 0;
}
