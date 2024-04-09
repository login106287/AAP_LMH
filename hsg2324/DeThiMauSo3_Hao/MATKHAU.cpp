#include <bits/stdc++.h>
using namespace std;
string s;
long long n = 0;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    fstream doc, ghi;
    doc.open("MATKHAU.INP", ios::in);
    ghi.open("MATKHAU.OUT", ios::out | ios::trunc);

    doc >> s;
    for (int i = 0; i < s.size(); i++) {
        n += int(s[i]) - 48;
    }
    ghi << n;

    doc.close(); ghi.close();
    return 0;
}
