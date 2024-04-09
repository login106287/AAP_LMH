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
    map<char,int>m;
    string str;
    cout << "Chuoi can dem ki tu: ";
    cin.ignore();
    getline(cin,str);
    for (int i=0; i<str.size(); i++) {
        m[(str[i])]=counts(str,str[i]);
    }
    for (auto& x:m) {
        cout << x.first << ", " << x.second << endl;
    }

    return 0;
}

/*
int main()
{
    struct ts {
        char s;
        int counts;
    };
    vector<ts> v;
    string str;
    cout << "Chuoi can dem ki tu: ";
    cin >> str;
    for (int i=0; i<str.size();i++) {
        char tempChar = str[i];
        int result = counts(str,tempChar);
        v.push_back({tempChar, result});
    }
    for (int i=0; i<str.size(); i++) {
        cout << v[i].tempChar << " , " << v[i].result << endl;
    }
    return 0;
}
*/
