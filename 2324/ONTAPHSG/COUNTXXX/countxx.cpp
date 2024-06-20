#include <bits/stdc++.h>
using namespace std;

bool check(string substring) {
    char fi = substring[0];
    for (char c:substring) {
        if (c != fi) return false;
    }
    return true;
}

int counts(string s) {
    int countss = 0;
    for (size_t start = 0; start < s.size(); start++) {
        for (size_t end = start + 1; end <= s.size(); end++) {
            string substring = s.substr(start, end - start);
            if (check(substring)) {
                countss++;
            }
        }
    }
    return counts;
}

int main() {
    int n;
    string s;
    cin >>n >> s;
    int result = counts(S);
    cout << result << endl;
    return 0;
}
