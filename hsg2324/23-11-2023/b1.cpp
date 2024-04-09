#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct ts{
        string name;
        int counts, price;
    };
    vector <ts> v;
    int n,a=0;
    cout << "Moi nhap so luong mat hang: ";
    cin >> n;
    for (int i=0 ;i<n; i++) {
        string name; int counts, price;
        cin.ignore();
        cout << "Nhap Tenhang: "; getline(cin, name);
        cout << "Nhap So Luong: "; cin >> counts; a+= counts;
        cout << "Gia Ban: "; cin >> price;
        v.push_back({name,counts,price});
    }
    cout << "Tong so luong hang hoa cua cua hang: " << a << endl;
    cout << "Thong tin cua hang co so luong lon hon 60" << endl;
    for (int i=0; i<n; i++){
        if (v[i].price>60) cout << "Ten: " << v[i].name << " , So luong: " << v[i].counts << endl;
    }
    cout << "Thong tin cua hang co so luong nho hon 10" << endl;
    for (int i=0; i<n; i++){
        if (v[i].price<10) cout << "Ten: " << v[i].name << " , So luong: " << v[i].counts << endl;
    }
    return 0;
}
