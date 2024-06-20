#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("ngaythang.inp","r",stdin);
    freopen("ngaythang.out","w",stdout);
    int d, m, y;
    cin >> d >> m >> y;
    if (m==1||m==3||m==5||m==7||m==8||m==10) {
        if (d==31) {
            d=1;
            m++;
        }
        else d++;
    }
    if (m==4||m==6||m==9||m==11) {
        if (d==30) {
            d=1;
            m++;
        }
        else d++;
    }
    if (m==2&&y%4==0) {
        if (y=29) {
            m++;
            d=1;
        }
        else d++;
    }
    if (m==2&&y%4!=0) {
        if (y=28) {
            m++;
            d=1;
        }
        else d++;
    }
    if (m==12) {
        if (d==31) {
            m=1;
            d=1;
            y++;
        }
    }
    cout << d << endl << m << endl << y;
    return 0;
}
