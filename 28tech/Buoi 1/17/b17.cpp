#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin >> t >> n;

    if ((t<=0)||(n<=0)||(t>12)) {
        cout << "INVALID";
    }
    else if ((n%400==0)||((n%4==0)&&(n%100!=0))) {
        if (t==2) {
            cout << 29;
        }
        else if ((t==1)||(t==3)||(t==5)||(t==7)||(t==8)||(t==10)||(t==12)){
            cout << 31;
        }
        else {
            cout << 30;
        }
    }
    else {
        if (t==2) {
            cout << 28;
        }
        else if ((t==1)||(t==3)||(t==5)||(t==7)||(t==8)||(t==10)||(t==12)){
            cout << 31;
        }
        else {
            cout << 30;
        }
    }

    return 0;
}
