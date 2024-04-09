#include <bits/stdc++.h>
using namespace std;

int tong(int n, int arr[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = tong(n, arr);
    cout << result << endl;
    return 0;
}
