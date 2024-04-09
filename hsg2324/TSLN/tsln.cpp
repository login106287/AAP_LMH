#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int m,n,num;
    vector<int>vi;
    cin >> m >> n;
    cin >> num;

    while (num!=0) {
        vi.push_back(num%10);
        num/=10;
    }

    sort(vi.begin(),vi.end(),greater<int>());

    for (int i=0; i<n; i++) vi.pop_back();
    for (auto x:vi) cout << x;

    return 0;
}
