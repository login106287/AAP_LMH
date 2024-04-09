#include <iostream>
#include <cmath>
using namespace std;

void solve(long long n) {
    long long a[n*2], b[n*2], min_all=0, ti=0, teo=0, count=0;
    for (int i=0; i<n*2; i++) {
        cin >> a[i] >> b[i];
    }
    for  (int i=0; i<n*2; i++) {
        min_all += min(a[i],b[i]);
        if (a[i]>b[i]) {
            ti++;
        }
        else {
            teo++;
        }
    }
    if (ti==teo) {
        cout << min_all;
    }
    else if (ti>teo) {
        int min_brand=10e6;
        for (int i=0; i<n*2; i++) {
            if (a[i]>b[i]) {
                if (a[i]-b[i]<min_brand) {
                    min_brand = a[i]-b[i];
                    //thieu gi do
                }
            }
        }
        min_all += min_brand;
        count++;
        if (count = (ti-teo)/2) {
            cout << min_all;
        }
    }
    else {
        int min_brand=10e6;
        for (int i=0; i<n*2; i++) {
            if (a[i]<b[i]) {
                if (b[i]-a[i]<min_brand) {
                    min_brand = b[i]-a[i];
                    //thieu gi do
                }
            }
        }
        min_all += min_brand;
        count++;
        if (count = (teo-ti)/2) {
                cout << min_all;
        }
    }
}

int main()
{
    long long n;
    cin >> n;
    solve(n);

    return 0;
}
