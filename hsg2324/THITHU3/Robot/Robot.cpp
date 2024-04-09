#include <bits/stdc++.h>
using namespace std;

vector<pair<char, int>> keyMap = {
    {'.', 11}, {',', 12}, {'?', 13}, {'!', 14}, {'1',15},
    {'a', 21}, {'b', 22}, {'c', 23}, {'2', 24},
    {'d', 31}, {'e', 32}, {'f', 33}, {'3', 34},
    {'g', 41}, {'h', 42}, {'i', 43}, {'4', 44},
    {'j', 51}, {'k', 52}, {'l', 53}, {'5', 54},
    {'m', 61}, {'n', 62}, {'o', 63}, {'6', 64},
    {'p', 71}, {'q', 72}, {'r', 73}, {'s', 74}, {'7', 75},
    {'t', 81}, {'u', 82}, {'v', 83}, {'8', 84},
    {'w', 91}, {'x', 92}, {'y', 93}, {'z', 94}, {'9',95},
    {'_', 01}
};

void solve(string s) {
    int pos=1, n=s.size()-1, time=0;
    while (n!=0) {
        for (int i=0; i<keyMap.size(); i++) {
            if (keyMap[i].first==s[n]) {
                if (pos!=keyMap[i].second/10) {
                    pos=keyMap[i].second/10;
                    time++;
                }
                time += keyMap[i].second%10;
            }
        }
        n-=1;
    }
    cout << time;
}

int main() {
    int T;
    string s;
    cin >> T;
    for (int i=0; i<T; i++) {
        cin >> s;
        solve(s);
    }
    return 0;
}
