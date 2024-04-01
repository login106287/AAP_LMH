#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<bool> sieveOfEratosthenes(long long n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (long long p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (long long i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    return prime;
}

// Kiểm tra xem một số có phải là số nguyên tố hay không
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    // Sử dụng sàng Eratosthenes cho các số lớn hơn 10^7
    if (n <= 10000000) {
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    // Sử dụng sàng Eratosthenes cho các số lớn hơn
    vector<bool> primes = sieveOfEratosthenes(sqrt(n));
    return primes[n];
}

int main() {
    long long limit = 100000000000000LL;
    for (long long i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " is prime" << endl;
        }
    }
    return 0;
}
