#include <bits/stdc++.h>
#define FOR(i,a,b,c) for (int i=a; i<b; i+=c)
#define FOD(i,a,b,c) for (int i=a; i>b; i-=c)
#define endl "\n"
using namespace std;

string add(string s1, string s2) {
    while (s1.size()>s2.size()) s2='0'+s2;
    while (s2.size()>s1.size()) s1='0'+s1;
    int x,y,s=0,nho=0,siz=s1.size();
    string str="";
    FOD(i,siz-1,-1,1) {
        x=int(s1[i]-48);
        y=int(s2[i]-48);
        s=x+y+nho;
        nho=s/10;
        str=char((s%10)+48)+str;
    }
    if (nho>0) str='1' +str;
    return str;
}

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    cout << add(s1,s2) <<endl;

    return 0;
}
