#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    int counts=0;
    for (int i=0; i<s.size()-5; i++) {
        if (s.substr(i,5)=="virus") counts++;
    }
    cout << counts;


    return 0;
}
