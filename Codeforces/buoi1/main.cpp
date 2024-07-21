#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ttt, tt, t;
    cin >> ttt >> tt >> t;

    if (ttt + tt + t + t + t == 1000) {
        cout << t << endl << "Nhan";
    }
    else {
        cout << t << endl << "Loai";
    }

    return 0;
}
