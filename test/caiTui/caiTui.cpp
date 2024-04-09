#include <bits/stdc++.h>
using namespace std;

int V[1006], W[1006];
int F[1006][1006];
int n, m;

void enter() {

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> W[i] >> V[i];
    }
}

void solution() {
    cout << F[n][m];
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

void process() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (W[i] <= j) {
                F[i][j] = max(F[i-1][j], F[i-1][j-W[i]] + V[i]);
            }
            else {
                F[i][j] = F[i-1][j];
            }
        }
    }
}

int main() {
    enter();
    process();
    solution();
    return 0;
}
