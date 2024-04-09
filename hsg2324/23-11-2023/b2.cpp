#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct ts {
        string sbd, ht;
        int toan, tv;
    };

    vector<ts> v;
    int n;
    cout << "Moi nhap so hoc sinh: ";
    cin >> n;
    for (int i=0; i<n; i++) {
        string sbd, ht; int toan, tv;
        cin.ignore();
        cout << "Nhap SBD: "; getline(cin, sbd);
        cout << "Nhap ht: "; getline(cin, ht);
        cout << "Nhap toan: "; cin >> toan;
        cout << "Nhap tv: "; cin >> tv;
        v.push_back({sbd,ht,toan,tv});
    }
    cout << "Danh sach thi sinh co tong diem tren 10: " << endl;
    for (int i=0; i<n; i++) {
        if (v[i].toan+v[i].tv>10) cout << "So bao danh: " << v[i].sbd << " - " << "Ho ten: " << v[i].ht << " - " << "Tong diem: " << v[i].toan+v[i].tv << endl;
    }
    cout << "Danh sach thi bi diem liet: " << endl;
    for (int i=0; i<n; i++) {
        if (v[i].toan==0||v[i].tv==0) cout << "So bao danh: " << v[i].sbd << " - " << "Ho ten: " << v[i].ht << " - " << "Tong diem: " << v[i].toan+v[i].tv << endl;
    }
    return 0;
}
