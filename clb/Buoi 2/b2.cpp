#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 100)
    {
        cout << number << " < 100";
    }
    else if (number > 100)
    {
        cout << number << " > 100";
    }
    else
    {
        cout << number << " = 100";
    }
    return 0;
}
