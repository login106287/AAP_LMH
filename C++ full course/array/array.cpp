#include <iostream>
using namespace std;

int main()
{
    int abc[3]={1,2,3};
    for (int i=0;i<3;i++)
    {
        cout << abc[i] << " ";
        cout << sizeof(abc);
    }
    return 0;
}
