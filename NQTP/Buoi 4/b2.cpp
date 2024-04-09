#include <iostream>
using namespace std;

int main()
{
    int M, N, max=0;
    cin >> M >> N;
    int A[M][N];
    for (int i=0; i<M; i++){
        for (int j=0; j<N; j++){
            cin >> A[i][j];
        }
    }
    cout << "\n";

    for (int i=0; i<M; i++){
        if (max<i){
            max = i;
        }
        for (int j=0; j<N; j++){
            min = j;
            if (j<min){
                min=j;
            }
        }
    }

    cout << "A" << i << j;

    return 0;
}
