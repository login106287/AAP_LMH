#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double s;
    cin >> n;
    if (n>0) {
        for (int i=1; i<=n; i++) {
            s+=1/(1.0*i);
        }
        cout << fixed << setprecision(3) << s;
    }
    else {
        return 0;
    }


    return 0;
}
