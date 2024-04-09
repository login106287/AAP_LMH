#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int a;
    cout << "Enter your name: ";
    cin >> name;
    /*if (name.length() > 7)
    {
        cout << "Your name can't be over 7 characters!\n";
    }
    else
    {
        cout << "Welcome " << name;
    }
    if (name.empty())
    {
        cout << "You didn't enter your name!\n";
    }
    else
    {
        cout << "Hello " << name;
    }
    name.append("@gmail.com");
    cout << "Your username is now: " << name;
    cout << name.at(1);
    //cout << "Your length's name is: " << name.length();
    a = name.length();
    name.insert(a,"@gmail.com");
    cout << "Your username is: " << name;
    cout << name.find("u");*/
    name.erase(0, 3);
    cout << "Your firstname is: " << name;
    return 0;
}
