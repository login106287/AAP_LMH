#include <bits/stdc++.h>
using namespace std;
int n, a, j;
long long k, sum, ans, rem;
vector<long long> mp;

int tknp (int val)
{
    int l, r, mid, p;
    l = 0; r = mp.size()-1;
    p = -1;
    while (l <= r) {
        mid = (l+r)/2;
        if (mp[mid] <= val) {
            p = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    fstream doc, ghi;
    doc.open("DOANHTHU.INP", ios::in);
    ghi.open("DOANHTHU.OUT", ios::out | ios::trunc);

    doc >> n >> k;

    sum = 0;
    for (int i = 0; i < n; i++) {
        doc >> a;
        sum += a;
        rem = sum-k;
        if (sum >= k) ans++;


        j = tknp(rem);
        if (j != -1) { // tim so dau tien <= rem
           ans += j;
        }

        mp.push_back(sum);
    }

    ghi << ans;

    doc.close(); ghi.close();
    return 0;
}
