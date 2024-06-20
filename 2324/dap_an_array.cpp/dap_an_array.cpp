#include <bits/stdc++.h>

using namespace std;
//=========================================
int tim_vi_tri(int arr[], int n) { // Hàm tìm vị trí của giá trị tuyệt đối nhỏ nhất trong mảng
    int min = abs(arr[0]); // Đặt giá trị nhỏ nhất là giá trị đầu tiên
    int vi_tri = 0;

    for (int i = 1; i < n; i++) {
        if (abs(arr[i]) < min) {
            min = abs(arr[i]); // Nếu có giá trị nào nhỏ hơn thì lưu lại giá trị đó
            vi_tri = i + 1;
        }
    }

    return vi_tri;
}
//--------------------
void sap_xep(int arr[], int n) { // Hàm sắp xếp mảng số thực tăng dần
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//--------------------
int so_chan_cuoi_cung(int arr[], int n) { // Hàm tìm số chẵn cuối cùng trong mảng số nguyên
    int cuoi_cung = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cuoi_cung = arr[i];
        }
    }

    return cuoi_cung;
}
//=========================================
main() {
    int n;
    cout << "Nhap so luong gia tri cua mang: ";
    cin >> n;
    int arr[n];
    cout << "Nhap cac gia tri cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Vi tri co gia tri tuyet doi nho nhat trong mang: " << tim_vi_tri(arr, n) << endl;

    sap_xep(arr, n);

    cout << "Mang so thuc sau khi sap xep tang dan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "So chan cuoi cung trong mang so nguyen: " << so_chan_cuoi_cung(arr, n) << endl;

    return 0;
}
