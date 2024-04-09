#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    fstream doc,ghi;
    doc.open("Matkhau.inp", ios::in);
    ghi.open("Matkhau.out", ios::out | ios::trunc);

    string s;
    doc >> s;
    int n=s.size()-1, t=0;
    while (n>=0) {
        t+=s[n]-'0';
        n--;
    }
    ghi <<t;

    doc.close();
    ghi.close();

    return 0;
}
