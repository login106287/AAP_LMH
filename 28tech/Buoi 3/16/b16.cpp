#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    if(n < 2){
        return 0;
    }
    int count = 0, snt=0, du;
    while (n!=0) {
        du = n%10;
        if (du<2) {
            snt-=1;
        }
        for(int i = 2; i <= sqrt(du); i++){
            if(du % i == 0){
                count++;
            }
        }
        if(count == 0){
            snt+=1;
        }
        n/=10;
    }
    cout << snt;

    return 0;
}
