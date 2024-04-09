#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;
    for (int i=0; i<S.length(); i++){
        cout << S[i] << "\n";
    }

    for (int i=S.length()-1;i>=0;i++){
        cout << S[i];
    }

    return 0;
}
