#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> my_result = {};
    int m;
    cin >> m;
    while (m!=0) {
        my_result.push_back(m/2);
        m/=2;
    }
    for (auto i=my_result.begin(); i!= my_result.end(); i++) {
        cout << *i << endl;
    }
    return 0;
}
