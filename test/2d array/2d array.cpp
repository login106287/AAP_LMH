#include <iostream>
using namespace std;

int main() {
    // Input the size of the number table
    int M, N;
    cin >> M >> N;

    // Input the number table
    int A[M][N];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    // Check for saddle element
    bool saddleElementFound = false;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            bool isSmallestInRow = true;
            bool isLargestInColumn = true;

            // Check if A[i][j] the smallest element in its row
            for (int k = 0; k < M; k++) {
                if (A[i][j] > A[i][k]) {
                    isSmallestInRow = false;
                    break;
                }
            }

            // Check if A[i][j] is the largest element in its column
            for (int k = 0; k < M; k++) {
                if (A[i][j] < A[k][j]) {
                    isLargestInColumn = false;
                    break;
                }
            }

            // If A[i][j] is a saddle element, print its position and stop checking
            if (isSmallestInRow && isLargestInColumn) {
                cout << "A" << i+1 << j+1;
                saddleElementFound = true;
                break;
            }
        }
        if (saddleElementFound) {
            break;
        }
    }

    // If no saddle element is found, print "NO"
    if (!saddleElementFound) {
        cout << endl;
    }

    return 0;
}
