#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>

bool docao(int x, int h) {
    int s=0;
    while (x!=0) {
        s+=x%10;
        x/=10;
    }
    if (s==h) return 1;
    else return 0;
}

void sang(int &n, vi &v) {
    bool check[n+1];
    for (int i=2; i<=n; i++) check[i]=1;
    for (int i=2; i<=n; i++) {
        if (check[i]) {
            for (int j=2*i; j<=n; j+=i) check[j]=0;
        }
    }
    for (int i=2; i<=n; i++) {
        if (check[i]) v.push_back(i);
    }
}

int main()
{
    int n,h, counts=0;
    vi v;
    cin >> n >> h;

    sang(n,v);

    for(auto x:v) {
        if (docao(x,h)) {
            cout << x << ' ' << endl;
            counts ++;
        }
    }
    cout << counts;

    return 0;
}
