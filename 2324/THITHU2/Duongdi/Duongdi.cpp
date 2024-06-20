#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAX=1e3;
string dp[MAX+7][MAX+7];

string xuli(string s,int n){
    for(int i=s.size();i<n;i++)
        s='0'+s;
    return s;
}

string add(string a, string b){
    string str;
    bool remainder=0;
    if(a.size()<b.size()) swap(a,b);
    b=xuli(b,a.size());
//    cout << b << "\n";
    int i,j,x=0;
    i=j=a.size()-1;
    while(i>=0&&j>=0){
        x=a[i]-'0'+(b[j]-'0')+remainder;
        if(x>9){
            remainder=1;
            x-=10;
        }
        else remainder=0;
        i--; j--;
        str=char(x+'0')+str;
//        cout << i << ' ' <<j <<' '<<str << '\n';
    }
    if(remainder) return "1"+str;
    else return str;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    fstream doc,ghi;
//    cout << add("4","6");
//    doc.open("Duongdi.inp", ios::in);
//    ghi.open("Duongdi.out", ios::out | ios::trunc);
    int n;
    cin >> n;
    for(int i=0;i<=n;i++){
        dp[i][1]=dp[1][i]="1";
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<=n;j++){
            dp[i][j]=add(dp[i-1][j],dp[i][j-1]);
//            cout << dp[i][j] << " ";
        }
//        cout << "\n";
    }
    cout << dp[n][n];
//    doc.close();
//    ghi.close();
    return 0;
}


