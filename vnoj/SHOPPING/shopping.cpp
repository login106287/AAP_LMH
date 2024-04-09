#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
  int A, B, M;
  cin >> A >> B >> M;

  vector<int> faceMaskPrices(A);
  vector<int> sanitizerPrices(B);
  for (int i = 0; i < A; i++) {
    cin >> faceMaskPrices[i];
  }
  for (int i = 0; i < B; i++) {
    cin >> sanitizerPrices[i];
  }

  int minCost = INT_MAX;

  for (int i = 0; i < M; i++) {
    int xi, yi, ci;
    cin >> xi >> yi >> ci;
    int totalCost = faceMaskPrices[xi - 1] + sanitizerPrices[yi - 1] - ci;
    minCost = min(minCost, totalCost);
  }

  cout << minCost << endl;

  return 0;
}
