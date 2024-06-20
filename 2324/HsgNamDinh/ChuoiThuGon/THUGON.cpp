#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

fstream doc,ghi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    doc.open("THUGON.INP", ios::in);
    ghi.open("THUGON.OUT", ios::out | ios::trunc);

    string s;
    doc >> s;
    int n = s.size();
    vi f(n);
    f[0]=1;
    for (int i=1; i<n; i++) {
        if (s[i]==s[i-1]) f[i]=f[i-1]+1;
        else {
            f[i]=1;
        }
    }
    for (int i=0; i<n; i++) {
        if (s[i]!=s[i+1]) ghi << f[i] << s[i];
    }

    doc.close(); ghi.close();
    return 0;
}
