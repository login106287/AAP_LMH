#include <iostream>
using namespace std;

void mang1chieu(char myChar[9]) {
    for (int i=0; i<9; i++) {
        cout << myChar[i] << " ";
    } cout << "\n";
}

void mang2chieu(char my2dChar[3][3]) {
    for (int m=0; m<3; m++) {
        for (int n=0; n<3; n++) {
            cout << my2dChar[m][n] << " ";
        } cout << "\n";
    }

}

int main()
{
    char myChar[9], my2dChar[3][3];
    int j=0;

    for (int i=0; i<9; i++) {
        cin >> myChar[i];
    } // nhap gia tri

    for (int m=0; m<3; m++) {
        for (int n=0; n<3; n++) {
            my2dChar[m][n] = myChar[j++];
        }
    } // gan gia tri mang 1 chieu vao mang 2 chieu

    mang1chieu(myChar);
    mang2chieu(my2dChar);

    return 0;
}
