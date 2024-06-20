#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number) {
    if (number < 2) {
        return false;
    }

    int sqrtNumber = std::sqrt(number);
    for (int i = 2; i <= sqrtNumber; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    //freopen("NTMAX.INP","r",stdin);
    //freopen("NTMAX.OUT","w",stdout);
    cin.tie(0)->sync_with_stdio(false);
    string s;
    cin >> s;
    vector<int>result={};
    int max=0, counts=0;
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            counts ++;
            int number = s[i] - '0';
            if (isPrime(number)) {
                result.push_back(number);
            }
        }
    }
    for (auto x:result) {
        if (max<x) x=max;
    }
    cout << counts << endl << max;
    return 0;
}
