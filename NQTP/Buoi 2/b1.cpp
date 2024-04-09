#include <iostream>
using namespace std;

int main()
{
    int luong,thue;
    cout << "Nhap luong cua nhan vien: ";
    cin >> luong;
    if (luong<7000000)
    {
        thue = luong / 10;
    }
    else if (luong<15000000)
    {
        thue = (luong*2)/10;
    }
    else
    {
        thue = (luong*3)/10;
    }
    luong -= thue;
    cout << "\nThue: " << thue << "\n";
    cout << "Luong rong: " << luong << "\n";
    return 0;
}
