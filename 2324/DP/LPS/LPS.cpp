#include <bits/stdc++.h>
using namespace std;

string result(string s) {
    int start=0, maxl=1, n=s.size(), low, high;

    for (int i= 1;i<n;++i) {
        low=i-1;
        high=i;
        while (low>=0&&high<n&&s[low]==s[high]) {
            if (high-low+1>maxl) {
                start=low;
                maxl=high-low+1;
            }
            --low;
            ++high;
        }

        low=i-1;
        high=i+1;
        while (low>=0&&high<n&&s[low]==s[high]) {
            if (high-low+1>maxl) {
                start=low;
                maxl=high-low+1;
            }
            --low;
            ++high;
        }
    }

    return s.substr(start, maxl);
}

int main() {
    string s;
    cin >> s;
    cout << result(s);
    return 0;
}
