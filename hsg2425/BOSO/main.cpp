#include <bits/stdc++.h>
#define vi vector<int>
#define FOR(i,a,b,c) for (int i=a; i<b; i+=c)
#define endl "\n"

using namespace std;

void primeDivisor(int n, vi&a) {
    FOR(i,2,sqrt(n),1) {
        while (n%i==0) {
            print(i);
            n/=i;
        }
    }
    if (n>1) vi.push_back(n);
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    vi a;

    primeDivisor(n,a);


}
