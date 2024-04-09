#include <bits/stdc++.h>

#define vl vector<int>
#define vb vector<bool>
#define pii pair<int, int>
#define FOR(i,a,b) for (int i=(a),_b=(b);i<b;i++)
using namespace std;

void generatePermutations(vl &a, vb &b, int k, vector<vector<int>>&result ) {
    bool valid;

    if (a.size()==b.size()) {
        result.push_back(a);
        return;
    }

    FOR(i,1,a.size()+1) {
        if (!b[i]) valid = 1;
        FOR(j,0,a.size()) {
            if (abs(a[j]-i)>k) {
                bool valid = 0;
                break;
            }
        }
        if (valid) {
            a.push_back(i);
            b[i] = 1;
            generatePermutations(a,b,k,result);
            a.pop_back();
            b[i] = 0;
        }
    }

}

main()
{
    int n,k;
    cin >> n >> k;

    vl a;
    vb b(n+1,0);
    vector<vector<int>> result;

    generatePermutations(a,b,k,result);

    for(const auto &x:result) {
        for (int v:x) cout << v << ' ';
        cout << endl;
    }

}
