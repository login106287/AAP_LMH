#include <bits/stdc++.h>
#define FOR(i,a,b,c) for (int i=a; i<b; i+=c)
#define endl "\n"

using namespace std;

int main()
{
    int n,k,s=0;
    cin >> n >>k;

    while(n) {
        if (n>=9) {
            s*=10;
            s+=9;
            n-=9;
        }
        else {
            s*=10;
            s+=n;
            n-=n;
        }

    }

    string new_s = to_string(s);
    if (new_s.size()!=k) {
        int re=k-new_s.size();
        s*=pow(10,re);
    }

    cout << s << endl;

    return 0;
}
