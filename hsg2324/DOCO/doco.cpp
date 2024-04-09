#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,fi=1,result=0,new_t[1006];
    cin >> n;
    cout << fi+1;
    cin >> new_t[0];
    for (int i=1;i<n;i++) {
        result = max(new_t[i-1]+1,result);
        cin >> new_t[i];
        cout << result << endl;
    }

    return 0;
}
