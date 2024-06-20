#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int minNumOfDisplays(int N, vector<int> groupSizes) {
    sort(groupSizes.begin(), groupSizes.end(), greater<int>());
    int displays = 0;
    while (!groupSizes.empty()) {
        int currentDisplay = 0;
        while (currentDisplay + groupSizes[0] <= 4) {
            currentDisplay += groupSizes[0];
            groupSizes.erase(groupSizes.begin());
            if (groupSizes.empty())
                break;
        }
        displays++;
    }
    return displays;
}

int main() {
    int N;
    cin >> N;
    vector<int> groupSizes(N);
    for (int i = 0; i < N; i++) {
        cin >> groupSizes[i];
    }
    int result = minNumOfDisplays(N, groupSizes);
    cout << result << endl;
    return 0;
}
