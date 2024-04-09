#include <iostream>
using namespace std;

int check(long long n) {
    int wrong = -1, count_2x = 0, count_step = 0;
    while (n!=1) {
        if (n%6==0) {
            n%=6;
            count_step++;
        }
        else {
            n*=2;
            count_2x++;
            count_step++;
        }
        if (count_2x == 5) {
                return wrong;
                return 0;
        }
    }
    return count_step;
}

int main()
{
    int t;
    cin >> t;
    long long n[t];
    for (int i=0; i<t; i++) {
       cin >> n[i];
    }
    for (int i=0; i<t; i++) {
        cout << check(n[i]) << endl;
    }
    return 0;
}
