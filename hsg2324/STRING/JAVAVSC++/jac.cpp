#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string s) {
    int counts=0, ldown=0;
    for (int i=0; i<s.size(); i++) {
        if (isupper(s[i])) counts ++;
        if (s[i]=='_') ldown++;
    }
    if (counts==0 && ldown!=0) return 1;
    else return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;

    if (check(s)) {
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='_') {
                s[i+1]-=32;
                s.erase(s.begin()+i);
            }
        }
        cout << s;
    }
    else cout << "Error!";
    return 0;

}
