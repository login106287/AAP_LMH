#include <bits/stdc++.h>
using namespace std;


int soNguoc(int temp) {
    int new_num=0;
    while (temp!=0) {
        int du = temp%10;
        new_num*=10;
        new_num+=du;
        temp/=10;
    }
    return new_num;
}

int main()
{
    int a = 123;
    cout << soNguoc(a);
    return 0;
}
