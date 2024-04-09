#include <iostream>
using namespace std;

int main()
{
    int temp;
    bool sunny;

    cout << "Enter the temperature: ";
    cin >> temp;
    if (temp<=10 || temp>30)
    {
        cout << "The temperature is bad!\n";
        sunny = false;
    }
    else
    {
        cout << "The temperature is good!\n";
        sunny = true;
    }
    if (!sunny)
    {
        cout << "It is cloudy outside!\n";
    }
    else
    {
        cout << "It is sunny outside!\n";
    }
    return 0;
}
