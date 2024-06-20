#include <bits/stdc++.h>
using namespace std;

int counts1(int K, string s) {
    int counts = 0;
    int s_size = s.size();

    for (int i = 0; i < s_size; i++) {
        for (int j = 1; j <= s_size - i; j++) {
            string sub = s.substr(i, j);
            int onesCount = 0;
            for (char c : sub) {
                if (c == '1') onesCount++;
            }
            if (onesCount == K) counts++;
        }
    }

    return counts;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);
    ifstream inFile("substr.inp");
    ofstream outFile("substr.out");

    int K;
    string s;
    inFile >> K >> s;

    int result = counts1(K, s);
    outFile << result;

    inFile.close();
    outFile.close();

    return 0;
}
