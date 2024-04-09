#include <bits/stdc++.h>
using namespace std;

int countsNum(string S) {
    int s=stoi(S), counts=0;
    for (int i=0; i<S.size();i++) {
        int temp=stoi(S[i]);
        if (temp==stoi(S[i])) counts++;
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    string T, S;
    cin >> T >> S;


    return 0;
}
