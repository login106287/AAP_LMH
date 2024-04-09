#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMinMissingNumber(int n, int k, vector<int>& A) {
    const int MAX_NUM = 1000001;
    vector<bool> present(MAX_NUM, false);

    for (int i = 0; i < k; i++) {
        present[A[i]] = true;
    }

    int minMissingNumber = 1;

    while (present[minMissingNumber]) {
        minMissingNumber++;
    }

    for (int i = k; i < n; i++) {
        present[A[i - k]] = false;
        present[A[i]] = true;

        if (A[i - k] == minMissingNumber) {
            while (present[minMissingNumber]) {
                minMissingNumber++;
            }
        }
    }

    return minMissingNumber;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int minMissingNumber = findMinMissingNumber(n, k, A);

    cout << minMissingNumber << endl;

    return 0;
}
