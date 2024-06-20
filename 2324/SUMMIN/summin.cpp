#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    vector<int>result;
    cin >> a;
    int arr[100007];
    for (int i=0; i<a; i++) {
        cin >> arr[i];
    }
    int min = 10001;
    for (int i=0; i<a-1;i++) {
        if (abs(arr[i]+arr[i+1])<=min) {
            result.clear();
            min = abs(arr[i]+arr[i+1]);
            result.push_back(i+1);
            result.push_back(i+2);
        }
    }
    cout << min << endl;
    for (auto x:result) cout << x << " ";
    return 0;
}
