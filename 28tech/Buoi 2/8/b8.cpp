#include <iostream>
using namespace std;

int main()
{
    long long int n,s=0,tong=0,i=0;
    int lst[5]={100,20,10,5,1};
    cin >> n;

    if (1<=n<=10e9) {
        while (i<4) {
            s+=n/lst[i];
            n-=lst[i]*(n/lst[i]);
            i++;
        }
        cout << s;
    }
    else {
        return 0;
    }

    return 0;
}
