#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("chia5between.inp","r",stdin);
    freopen("chia5between.out","w",stdout);
    int a,b,counts=0;
    cin >> a >> b;

    for (int i=a; i<=b; i++) {
        if (i%5==0) {
            cout << i << " ";
            counts++;
            if (counts>=10) {
                cout << endl << "In qua 10 so roi";
                break;
            }
        }
    }
    if (counts<10) cout << endl << "Da in het cac so chia het cho 5";


    return 0;
}
