#include <bits/stdc++.h>
#define vl vector<int>
#define vb vector<bool>
#define pii pair<int, int>
#define FOR(i,a,b,c) for (int i=(a),_b=(b);i<b;i+=c)
#define fi first
#define se second
using namespace std;

int main() {
    int M, N, K;
    cin >> M >> N >> K;

    map<pii>, int> m;
    for (int i = 0; i < 4 * K; ++i) {
        int x, y;
        cin >> x >> y;
        m[{x, y}]++;
    }

    int total_m = 0;
    for (auto it = m.begin(); it != m.end(); ++it) {
        total_m += it->second;
    }

    if (total_m % 4 != 0) {
        cout << 0 << endl;
        return 0;
    }

    int cherry_per_piece = total_m / 4;
    int counts = 0;


    for (auto it1 = m.begin(); it1 != m.end(); ++it1) {
        for (auto it2 = next(it1); it2 != m.end(); ++it2) {
            int x1 = it1->first.first, y1 = it1->first.second;
            int x2 = it2->first.first, y2 = it2->first.second;

            if ((x1 + x2) % 2 == 0 && (y1 + y2) % 2 == 0) {
                int x3 = (x1 + x2) / 2, y3 = (y1 + y2) / 2;
                int m_on_cut = m[{x1, y1}] + m[{x2, y2}] + m[{x3, y3}];

                if (m_on_cut == cherry_per_piece * 2) {
                    count++;
                }
            }
        }
    }

    cout << counts << endl;

    return 0;
}
