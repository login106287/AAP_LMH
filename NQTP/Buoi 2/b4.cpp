#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    /*for (int i=1; i<=n; i++){
        if (i%2==0){
            cout << i << " ";
        }
    }

    for (int i=1; i<=n; i++){
        if (n%i==0){
            cout << i << " ";
        }
    }*/

    int i=1;
    while (i<100){
        if (i%n==0){
            cout << i << " ";
        }
        i++;
    }

    return 0;
}
