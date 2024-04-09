#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a positive #: ";
    cin >> number;
    do{
        cout << "Enter a positive #: ";
        cin >> number;
    }while (number<0);
    cout << "\nThe # is: " << number;
    return 0;
}
