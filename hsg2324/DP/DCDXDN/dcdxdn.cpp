#include <bits/stdc++.h>
using namespace std;

void init() {
    ifstream inFile("dcdxdn.INP");
    int n;
    inFile n;
    int arr[n+5];
    for (int i=0; i<n; i++) inFile arr[i];
    inFile.close();
}

void result() {
    ofstream outFile("dcdxdn.OUT");



    outFile.close();
}

bool dx(string str) {
    int n = str.size();
    for (int i=0; i<n; i++) {
        if (S[i]!=S[n-(i+1)]) return 0;
    }
    return 1;
}


void solve(int n, int arr[]) {
    int length=0;
    string s="";
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++)) {
            if dx((s.substr(i,j))) {
                if (length<j) length=j;
            }
        }
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    init();
    solve();
    result();

    return 0;
}
