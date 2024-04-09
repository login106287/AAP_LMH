#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, count[26] = {0};
    string s;
    cin >> k >> s;

    // Đếm số lần xuất hiện của mỗi ký tự trong chuỗi s
    for (char c : s) {
        count[c - 'a']++;
    }

    // Kiểm tra xem có ký tự nào xuất hiện quá k lần không
    for (int i = 0; i < 26; i++) {
        if (count[i] > k) {
            cout << -1 << endl;
            return 0;
        }
    }

    // Xây dựng chuỗi kết quả bằng cách sắp xếp lại các ký tự trong chuỗi s
    sort(s.begin(), s.end());

    // In ra chuỗi kết quả
    cout << s << endl;

    return 0;
}
