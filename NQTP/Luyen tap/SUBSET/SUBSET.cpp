#include <iostream>
#include <algorithm>
using namespace std;

void printCombination(int n, int k) {
    int combination[k];

    // Initialize the combination array with the first configuration: 1, 2, 3, ..., k
    for (int i = 0; i < k; i++) {
        combination[i] = i + 1;
    }

    while (true) {
        // Print the current combination
        for (int i = 0; i < k; i++) {
            cout << combination[i] << " ";
        }
        cout << endl;

        // Find the rightmost element that can be incremented
        int rightmost = k - 1;
        while (rightmost >= 0 && combination[rightmost] == n - k + rightmost + 1) {
            rightmost--;
        }

        // No more combinations to generate
        if (rightmost < 0) {
            break;
        }

        // Increment the rightmost element and update the rest of the combination
        combination[rightmost]++;
        for (int i = rightmost + 1; i < k; i++) {
            combination[i] = combination[rightmost] + (i - rightmost);
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    printCombination(n, k);
    return 0;
}
