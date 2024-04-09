#include <iostream>
#include <cstring>
using namespace std;

void check_string(string s){
    if (s.find("I") == 0) {
        cout << "am";
    }
    else if (s.find("We") ==0 || s.find("You") == 0 || s.find("They") == 0) {
        cout << "are";
    }
    else {
        cout << "is";
    }
}

int main()
{
    string s;
    cin >> s;
    check_string(s);
    return 0;
}
