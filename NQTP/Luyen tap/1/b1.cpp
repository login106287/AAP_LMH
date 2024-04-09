#include <iostream>
using namespace std;

int main()
{
    int n;
    bool check;
    cin >> n;
    int lst[n];
    for (int i=0; i<n; i++) {
        cin >> lst[i];
    }
    for (int i=0; i<n; i++) {
        if (lst[i]>lst[i+1]) {
            cout << "NO";
            return 0;
        }
        check = 1;
    }
    if (check==1) {
        cout << "YES";
    }

    return 0;
}
