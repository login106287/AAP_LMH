#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,result=0,s=0,car=0,car13,car12,counts1=0,counts2=0,counts3=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a;
        if (a==1) counts1 ++;
        else if (a==2) counts2 ++;
        else if (a==3) counts3 ++;
        else result++;
    }
    if (counts1<counts3) {
        car13 = ceil(counts1+counts3*2)/4;
        counts3 -= counts1;
    }
    else {
        car13 = ceil(counts1+counts1*2)/4;
        counts1 -= counts3;
    }
    if (counts2%2==0) result += counts2/2;
    else {
        result += (counts2-1)/2;
        counts2 = 1;
    }
    if (counts1>counts2) result++;
    if (counts1!=0) {
        result += ceil((1.0*counts1)/4);
    }
    result+=car13;
    cout << result;
    return 0;
}
