#include <bits/stdc++.h>
using namespace std;

int counts(string n,char s) {
    int counts=0;
    for (int i=0; i<n.size();i++) {
        if (s==n[i]) counts ++;
    }
    return counts;
}

int main()
{
    int counts =0;
    for (int p=0; p<inf.size(); p++) {
        if (inf[p] == '#') counts ++;
        if (counts == 2) break;
    }

    string str;
    cin >> str;
    for (int i=inf.size()/2; i<inf.size();i++) {
        string subStr = inf.substr(i,2);
        if (subStr=="9A") {
            tempStr = inf.substr(0, p);
            v.push_back(tempStr);
        }
    }


    return 0;
}
