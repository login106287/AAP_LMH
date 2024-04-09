#include <iostream>
using namespace std;

int main()
{
    int n,cost,gia=0;
    cin >> n;

    for (int i=1;i<=n;i++){
        if (i<6){
            cost=6500;
        }
        else if (i>5 && i<16){
            cost=7800;
        }
        else if (i>15 && i<26){
            cost=9200;
        }
        else{
            cost=10300;
        }
        gia+=cost;
    }

    double thue = gia*12/100, tong = thue+gia;

    cout << gia << "\n";
    cout << thue << "\n";
    cout << tong << "\n";

    return 0;
}
