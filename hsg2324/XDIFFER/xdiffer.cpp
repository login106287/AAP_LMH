#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    long long M, N, counts=0;
    cin >> M >> N;
    string string1[M], string2[M];
    for (int i=0; i<M; i++) cin >> string1[i];
    for (int i=0; i<M; i++) cin >> string2[i];
    for (int j=0; j<N; j++) {
        for (int i=0; i<M; i++) {
            if (((string1[i])[j])!=((string2[i])[j])) counts++;
        }
    }
    cout << counts;
    return 0;
}
