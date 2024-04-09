#include <iostream>
using namespace std;

void Sort(int myArr[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (myArr[i]>myArr[j]) {
                swap(myArr[i],myArr[j]);
            }
        }
    }
}

int main()
{
    int a;
    cin >> a;
    int myArr[a];

    for (int i=0; i<a; i++) {
        cin >> myArr[i];
    } // nhap gia tri

    Sort(myArr,a);
    for (int i=0; i<a; i++) {
        cout << myArr[i] << " ";
    }cout << "\n";

    return 0;
}
