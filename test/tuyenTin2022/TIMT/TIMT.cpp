#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("TIMT.INP","r",stdin);
    freopen("TIMT.OUT","w",stdout);
    int iii, ii, i;
    cin >> iii >> ii >> i;
    cout << i << endl;
    if (iii + ii + i*3 == 1000) {
        cout << "Nhan";
    }
    else {
        cout << "Loai";
    }

    return 0;
}
