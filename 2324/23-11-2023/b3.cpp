#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct ts {
        string ht,ngaysinh, diachi;
        int toan, van;
        char xl;
    };

    vector<ts> v;
    int n;
    cout << "Moi nhap so hoc sinh: ";
    cin >> n;
    for (int i=0; i<n; i++) {
        string ngaysinh, ht, diachi; int toan, van;
        char xl;
        cin.ignore();
        cout << "Moi nhap ht: "; getline(cin, ht);
        cout << "Moi nhap ngay sinh: "; getline(cin,ngaysinh);
        cout << "Moi nhap dia chi: "; getline(cin,diachi);
        cout << "Moi nhap diem toan: "; cin >> toan;
        cout << "Moi nhap diem van: "; cin >> van;
        if (toan+van<10) xl = 'D';
        else if (toan+van>=10&&toan+van<14) xl = 'C';
        else if (toan+van>=14&&toan+van<18) xl = 'B';
        else xl = 'A';
        v.push_back({ht,ngaysinh,diachi,toan,van,xl});
    }
    cout << "KET QUA" << endl;
    for (int i=0;i<n;i++) {
        cout << "Hoc sinh thu " << i+1 << ": ";
        cout << v[i].ht << " " << v[i].toan+v[i].van  << " Diem - Xep loai: " << v[i].xl << endl;
    }

    return 0;
}
