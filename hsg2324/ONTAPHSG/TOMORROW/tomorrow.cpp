#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M,D,y,m,d;
    cin >> M >> D;
    cin >> y >> m >> d;
    if (d==D && m==M) {
        d=1;
        m=1;
        y++;
    }
    else if (d==D) {
        m++;
        d=1;
    }
    else {
        d++;
    }
    cout << y << " " << m << " " << d;

    return 0;
}
