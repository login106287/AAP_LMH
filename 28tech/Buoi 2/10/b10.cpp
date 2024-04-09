#include <iostream>
#include <algorithm>
using namespace std;

void check(long long int a, long long int b, long long int c) {
    long long int lst[4]={a+c+b,a+a+b+b,a+c+c+a,b+c+c+b};
    sort(lst,lst+4);
    cout << lst[0];
}

int main()
{
    long long int d1,d2,d3;
    cin >> d1 >> d2 >> d3;
    if (1<=d1<=10e8 && 1<=d2<=10e8 && 1<=d3<=10e8) {
        check(d1,d2,d3);
    }
    else {
        return 0;
    }
    return 0;
}
