#include <bits/stdc++.h>
using namespace std;
string kitu, slbam, vitri, s;
int ans, n;
char pos;
//----------------------------------
void taophim() {
    kitu =  ".,?!1abc2def3ghi4jkl5mno6pqrs7tuv8wxyz9_0";
    slbam = "12345123412341234123412341234512341234512";
    vitri =  "11111222233334444555566667777788889999900";
}
//----------------------------------
int duyet(string s)
{
    pos = '1';
    ans = 0;
    int j;

    for (int i = 0; i < s.length(); i++) {
        j = kitu.find(s[i]);
        if (vitri[j] != pos) {
            pos = vitri[j];
            ans++;
        }
        ans += int(slbam[j]) - 48;
    }

    return ans;
}
//----------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    fstream doc, ghi;
    doc.open("ROBOT.INP", ios::in);
    ghi.open("ROBOT.OUT", ios::out | ios::trunc);

    taophim();

    doc >> n;
    for (int i = 0; i < n; i++) {
        doc >> s;
        ghi << duyet(s) << endl;
    }

    doc.close(); ghi.close();
    return 0;
}
