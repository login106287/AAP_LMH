#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    int s=0;
    cin >> n;
    for (int i=0; i<n.length(); i++) {
        if ('1'<=(char)n[i]<='9'){
            s += int((char)n[i]) - 48;
            cout << n[i] << endl;
        }
    }
    cout << s;

    return 0;
}
