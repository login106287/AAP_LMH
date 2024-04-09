#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int age[n], temp, max =0, counts =1;
    for (int i=0; i<n; i++){
        cin >> age[i];
    }
    for (int i=0; i<n; i++){
        temp = age[i];
        for (int i=0; i<n-1; i++){
            if (temp==age[i]&&age[i]==age[i+1]) counts ++;
            if (max<counts) max = counts;
        }
        counts = 1;
    }
    cout << max;
    return 0;
}
