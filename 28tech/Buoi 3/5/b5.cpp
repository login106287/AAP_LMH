#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double s=0;
    cin >> n;
    if (n>0) {
        for (int i=1; i<=n; i++) {
            s+=1/(1.0*2*i);
        }
        cout << fixed << setprecision(2) << s;
    }
    else {
        return 0;
    }

    return 0;
}
