#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

void solve(int n, vi a){
    int s=0;
    if (a[0]<a[1]) s=a[1];
    else s=a[0];
    for (int i=2; i<n-2; i++) {
        if (s+pow(-1,i+1)*a[i+1]>s+pow(-1,i+1)*a[i+1]) s+=pow(-1,i+1)*a[i+1];
        else (s+pow(-1,i+1)*a[i+1]>s+pow(-1,i+1)*a[i+1]) s+=pow(-1,i+1)*a[i+1];
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vi a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    solve(n,a);
    return 0;
}
