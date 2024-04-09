#include <iostream>
using namespace std;

int giaithua(int a){
    int s=1;
    for (int i=1; i<=a; i++) {
        s*=i;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    if (n>0) {
        cout << giaithua(n);
    }

    return 0;
}
