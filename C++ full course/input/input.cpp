#include <iostream>
using namespace std;

int main()
{
    string name, age;
    cout << "Type your name: ";
    getline(cin,name);
    cout << "How old are you?: ";
    getline(cin >> ws, age);
    cout << "Good morning " << name << endl;
    cout << "You are " << age << " years old";
    return 0;

}
