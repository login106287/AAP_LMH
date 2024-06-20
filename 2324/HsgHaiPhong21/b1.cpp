#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  string s;
  getline(cin, s);
  string ans;
  for (char d : s) {
    if (('a' <= d && d <= 'z') || ('A' <= d && d <= 'Z')) {
      ans += d;
    }
  }
  cout << ans;
  return 0;
}
