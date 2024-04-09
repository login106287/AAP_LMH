#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    char c;
    int h, counts=0,q=0;
    cin >> c >> h;
    int temp=h;

    while (h>0){
        for (int i=1; i<h; i++) counts++;
        for (int j=0; j<=q; j++) counts++;
        h--;
        q+=2;
    }
    cout << counts << endl;

    int d=0;

	while (temp>0){
        for (int i=1; i<temp; i++) cout << " ";
        for (int j=0; j<=d; j++) cout << c;
        temp--;
        d+=2;
        cout << endl;
    }

    return 0;
}
