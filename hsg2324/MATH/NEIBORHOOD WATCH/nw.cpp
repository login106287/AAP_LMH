#include <bits/stdc++.h>
using namespace std;
#define pi pair<int,int>
#define fi first
#define se second

int main()
{
    int n, k;
    cin >> n >> k;
    int safe[k+1];
    vector<pi>p(200001);
    int l=1;
    for (int q=0; q<k; q++) cin >> safe[q];
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            p[l].fi=i;
            p[l].se=j;
            l++;
        }
    }

    l=1;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (p[l].fi==p[n-l+1].se&&p[l].se==p[n-l+1].fi) {
                p[l].fi=0;
                p[l].se=0;
            }
            l++;
        }
    }

    l=1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout << p[l].fi << " " << p[l].se << endl;
            l++;
        }
    }
    return 0;
}
