#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void sieveOfEratosthenes(vector<bool> &a, long long n) {
    // Khởi tạo tất cả các phần tử của mảng là true
    for (long long i = 0; i <= n; ++i) {
        a[i] = true;
    }

    // Đánh dấu các số không phải là số nguyên tố
    a[0] = a[1] = false;
    long long sqrtN = sqrt(n);
    for (long long i = 2; i <= sqrtN; ++i) {
        if (a[i]) {
            for (long long j = i * i; j <= n; j += i) {
                a[j] = false;
            }
        }
    }
}

int main() {
    long long n = 100000000000; // Số nguyên tố cần kiểm tra tới
    vector<bool> primes(n + 1);

    sieveOfEratosthenes(primes, n);

    // In ra kết quả
    cout << "Cac so nguyen to tu 0 den " << n << " la:\n";
    for (long long i = 0; i <= n; ++i) {
        if (primes[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
