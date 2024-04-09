#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 40;

int n, m;
long long res;
int v[MAXN], w[MAXN];

int n1, n2;
int sv1[1050000], sv2[1050000];
int sw1[1050000], sw2[1050000];

void inp() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
    }
}

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void sort1(int l, int r) {
    int i = l, j = r, mid = sw1[l + rand() % (r - l + 1)];
    do {
        while (sw1[i] < mid) i++;
        while (sw1[j] > mid) j--;
        if (i <= j) {
            swap(sv1[i], sv1[j]);
            swap(sw1[i], sw1[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (i < r) sort1(i, r);
    if (l < j) sort1(l, j);
}

void sort2(int l, int r) {
    int i = l, j = r, mid = sw2[l + rand() % (r - l + 1)];
    do {
        while (sw2[i] < mid) i++;
        while (sw2[j] > mid) j--;
        if (i <= j) {
            swap(sv2[i], sv2[j]);
            swap(sw2[i], sw2[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (i < r) sort2(i, r);
    if (l < j) sort2(l, j);
}

void solve() {
    int nn = n >> 1;
    n1 = 1 << nn;
    n2 = 1 << (n - nn);

    for (int i = 0; i < n1; i++) {
        for (int bit = 1; bit <= nn; bit++) {
            if ((i >> (bit - 1)) & 1) {
                sv1[i] += v[bit];
                sw1[i] += w[bit];
            }
        }
    }

    for (int i = 0; i < n2; i++) {
        for (int bit = 1; bit <= n - nn; bit++) {
            if ((i >> (bit - 1)) & 1) {
                sv2[i] += v[bit + nn];
                sw2[i] += w[bit + nn];
            }
        }
    }

    sort1(0, n1 - 1);
    sort2(0, n2 - 1);

    int j = 0;
    res = 0;
    int m1 = sv1[j];
    for (int i = n2 - 1; i >= 0; i--) {
        while (j < n1 - 1 && sw1[j + 1] + sw2[i] <= m) {
            j++;
            m1 = max(m1, sv1[j]);
        }
        if (sw1[j] + sw2[i] <= m && m1 + sv2[i] > res) {
            res = m1 + sv2[i];
        }
    }
    cout << res << endl;
}

int main() {
    inp();
    solve();
    return 0;
}
