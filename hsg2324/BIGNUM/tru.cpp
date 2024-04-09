#include <bits/stdc++.h>
using namespace std;

string sub(string a, string b)
{
    string res="";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    bool neg=false;
    if(a<b)
    {
        swap(a,b);
        neg=true;
    }
    int borrow=0;
    for(int i=a.length()-1; i>=0;i--)
    {
        int tmp=a[i]-b[i]-borrow;
        if(tmp<0)
        {
            tmp+=10;
            borrow=1;
        }
        else borrow=0;
        res=(char)(tmp%10 + 48) + res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    if(neg) res="-"+res;
    return res;
}

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    cout << sub(s1,s2);
    return 0;
}
