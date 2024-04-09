#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float C,F;
    cin >> C;
    cout << setprecision(2) << fixed << (C*9/5)+32;
    return 0;
}
