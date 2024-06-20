#include <bits/stdc++.h>
using namespace std;

int pos(string inf){
    int counts =0;
    for (int p=0; p<inf.size(); p++) {
        if (inf[p] == '#') counts ++;
        if (counts == 2) return p;
    }
}

int main()
{
    int n, f, p;
    string inf, tempStr;
    cout << "Nhap so hoc sinh: ";
    cin >> n;
    vector<string> v;
    for (int i=0; i<n; i++) {
        cin.ignore();
        getline(cin,inf);

        p = pos(inf);

        for (int i=inf.size()/2; i<inf.size();i++) {
            string subStr = inf.substr(i,2);
            if (subStr=="9A") {
                tempStr = inf.substr(0, p);
                v.push_back(tempStr);
            }
        }
    }

    for (auto x:v) cout << x << endl;

    return 0;
}
