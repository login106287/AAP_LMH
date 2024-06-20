#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string s;
    int counts = 0;
    cin.ignore();
    getline(cin,s);

    for (char c:s) {
        if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='Y') counts ++;
    }

    cout << counts;

    return 0;
}
