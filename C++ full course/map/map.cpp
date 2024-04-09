#include <map>
#include <iostream>
using namespace std;

int main()
{
    int counts=0;
//    map<string, int> a;
//    a["one"]=1;
//    a["two"]=2;
//    a["three"]=3; a.insert(pair<string,int>("one hundred",100));
//    for (auto i : a) {
//        cout << i.first << ' ' << i.second << endl;
//    }
    for (char c='a'; c<='z'; c++) {
        counts++;
    }
    cout << counts;

    return 0;
}
