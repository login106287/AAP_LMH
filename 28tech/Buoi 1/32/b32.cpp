#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    long long int lst[5];
    for (int i=0; i<5; i++) {
        cin >> lst[i];
    }
    sort(lst,lst+5);
    cout << lst[1];


    return 0;

}
