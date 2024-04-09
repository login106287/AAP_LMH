#include <iostream>
using namespace std;

int check(int a){
    if (1<=a<=6) {
        return a;
    }
    else {
        return 0;
    }
}

int main()
{
    int n,m,c,a=0,b=0;
    cin >> n;
    if (1<=n<=100) {
        for (int i=1;i<=n;i++) {
            cin >> m >> c;
            check(m);
            check(c);
            if (m>c) {
                a++;
            }
            else if (m<c) {
                b++;
            }
        }
        if (a>b) {
            cout << "Mishka";
        }
        else if (a<b) {
            cout << "Chris";
        }
        else {
            cout << "Friendship is magic!^^";
        }
    }

    return 0;
}
