#include <bits/stdc++.h>
using namespace std;

int findLongestFreeDays(vector<string>& schedules, int N, int D) {
    int longestFreeDays = 0, currentFreeDays = 0;
    for (int day = 0; day < D; day++) {
        bool allFree = true;
        for (int person = 0; person < N; person++) {
            if (schedules[person][day-1] == 'x') {
                allFree = false;
                break;
            }
        }

        if (allFree) {
            currentFreeDays++;
            longestFreeDays = max(longestFreeDays, currentFreeDays);
        } else {
            currentFreeDays = 0;
        }
    }

    return longestFreeDays;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int N, D;
    cin >> N >> D;

    vector<string> schedules(N);
    for (int i = 0; i < N; i++) {
        cin >> schedules[i];
    }

    int longestFreeDays = findLongestFreeDays(schedules, N, D);

    cout << longestFreeDays;

    return 0;
}
