#include <iostream>
#include <fstream>
using namespace std;

const int MAXN = 100;
int a[MAXN][MAXN];
int b[MAXN][MAXN];
int n;

void init() {
    ifstream f("bscnn.INP");
    f >> n;
    f.close();
}

int bscnn(int x, int y) {
    int tg, i, j;
    i = x;
    j = y;
    while (i % j != 0) {
        tg = j;
        j = i % j;
        i = tg;
    }
    return (x * y) / j;
}

void solution() {
    int i, j, t;
    int tg;
    for (i = 1; i <= n; i++) {
        a[i][1] = i;
        b[i][1] = i;
    }
    for (j = 2; j <= n - 1; j++) {
        for (i = j + 1; i <= n; i++) {
            a[i][j] = 0;
            for (t = 1; t <= i - j + 1; t++) {
                tg = bscnn(a[i - t][j - 1], t);
                if (a[i][j] < tg) {
                    a[i][j] = tg;
                    b[i][j] = t;
                }
            }
        }
    }
}

void result() {
    ofstream f("bscnn.OUT");
    int i, j;
    j = n;
    for (i = 1; i <= n - 1; i++) {
        if (a[n][n] < a[n][i]) {
            a[n][n] = a[n][i];
            j = i;
        }
    }
    f << a[n][n] << endl;
    i = n;
    while (j > 0) {
        f << b[i][j] << " ";
        i = i - b[i][j];
        j = j - 1;
    }
    f.close();
}

int main() {
    //cin.tie(0)->sync_with_stdio(false);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    init();
    solution();
    result();

    return 0;
}
