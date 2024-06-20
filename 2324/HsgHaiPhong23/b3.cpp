#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

bool check[100000];
int s[100000];

void sang() {
    check[0]=0;
    check[1]=0;
    for (int i=2; i<=100000; i++) check[i]=1;
    for (int i=2; i<=100000; i++) {
        if (check[i]) {
            for (int j=i*2; j<=100000/2; j+=i) check[j]=0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m, u, v;
    cin >> n >> m;
    vi a(n);
    sang();
    for (int i=1; i<=n; i++){
        cin >> a[i];
        s[i]=s[i-1]+a[i];
    }

    for (int i=1; i<=m; i++) {
        cin >> u >> v;
        int x = s[v]-s[u-1];
        if (check[x]) cout << 1 << endl;
        else cout << 0 << endl;
    }

    return 0;
}

