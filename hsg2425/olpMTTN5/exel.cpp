#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int solve(const vector<vi>& a, const string& s) {
    int pos = s.find(",");
    if (s.find("SUM") != string::npos) {
        string cell1 = s.substr(4, pos-4);
        string cell2 = s.substr(pos+1, s.size()-pos-2);

        int row1 = cell1[1]-'0'-1;
        int col1 = cell1[0]-'A';
        int row2 = cell2[1]-'0'-1;
        int col2 = cell2[0]-'A';

        return a[row1][col1] + a[row2][col2];
    }
    else if (s.find("MAX") != string::npos) {
        string cell1 = s.substr(4, pos-4);
        string cell2 = s.substr(pos+1, s.size()-pos-2);

        int row1 = cell1[1]-'0'-1;
        int col1 = cell1[0]-'A';
        int row2 = cell2[1]-'0'-1;
        int col2 = cell2[0]-'A';

        return max(a[row1][col1], a[row2][col2]);
    }
    else if (s.find("MAX")>1 || s.find("SUM")>1) {

    }

    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int m, n;
    cin >> m >> n;

    vector<vi> a(m, vector<int>(n));
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) cin >> a[i][j];
    }

    int q;
    cin >> q;
    cin.ignore();

    for (int i=0; i<q; i++) {
        string s;
        getline(cin,s);

        cout << solve(a,s) << endl;
    }

    return 0;
}
