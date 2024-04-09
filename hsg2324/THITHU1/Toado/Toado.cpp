#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

float kc(Point a, Point b) {
    return sqrt(pow(b.x-a.x,2) +pow(b.y-a.y,2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    freopen("Toado.inp","r",stdin);
    freopen("Toado.out","w",stdout);

    int N;
    cin >> N;
    vector<Point> points(N);

    for (int i = 0; i < N; i++) {
        cin >> points[i].x >> points[i].y;
    }

    float minkc = INT_MAX;
    Point minPoint1, minPoint2;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            float dist = kc(points[i], points[j]);
            if (dist < minkc) {
                minkc = dist;
                minPoint1 = points[i];
                minPoint2 = points[j];
            }
        }
    }

    cout << minPoint1.x << " " << minPoint1.y << endl;
    cout << minPoint2.x << " " << minPoint2.y << endl;

    return 0;
}
