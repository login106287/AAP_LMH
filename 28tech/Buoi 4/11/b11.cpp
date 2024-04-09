#include <iostream>
using namespace std;

void tongGiaiThua(int a, int b){
    int count = 0;
    int du;
    for (int i=a; i<=b; i++) { // cho i chay tu a den b
        int tongGt = 0;
        while (i!=0) {
            du = i%10;
            int Gt = 1;
            for (int j = 1; j<=du; j++) { // giai thua
                Gt *= j;
            }
            tongGt += Gt;
            i/=10;
        }
        if (tongGt == i) {
            cout << i << " ";
            count ++;
        }

    }
    if (count == 0) {
        cout << 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b;
    cin >> a >> b;
    tongGiaiThua(a,b);

    return 0;
}
