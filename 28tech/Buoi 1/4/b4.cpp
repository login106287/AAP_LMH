#include <iostream>
using namespace std;

int main()
{
    long long a,b,tong,hieu,tich;
    float thuong;
    cin >> a;
    cin >> b;
    tong = a+b;
    hieu = a-b;
    tich = a*b;
    thuong = a/b;
    if (b==0)
    {
        cout << "Please enter a number b other than 0!";
    }
    cout << tong << " " << hieu << " " << tich << " " << thuong;
    return 0;
}
