#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    while(name.empty())
    {
        cout << "Enter your name: ";
        cin >> name;
    }
    cout << "Hello " << name;
    return 0;
}
