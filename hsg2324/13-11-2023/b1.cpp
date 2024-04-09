#include <bits/stdc++.h>
using namespace std;

void findmax(int a,int b,int c) {
    int maxResult = a;
    if (a<b) maxResult=b;
    if (maxResult<c) maxResult=c;
    cout << maxResult;
}


int main(){
    int a[5];
    cout << "Nhap vao so thu nhat: ";
    cin >> a[0];
    cout << "Nhap vao so thu hai: ";
    cin >> a[1];
    cout << "Nhap vao so thu ba: ";
    cin >> a[2];
    findmax(a[0],a[1],a[2]);
    return 0;
}
