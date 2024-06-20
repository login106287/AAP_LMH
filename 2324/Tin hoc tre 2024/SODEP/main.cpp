#include <bits/stdc++.h>
#define FOR(i,a,b,c) for (int i=a; i<b; i+=c)
#define endl "\n"
#define vi vector<int>
#define pii pair<int,int>
#define fi first
#define se second
using namespace std;

bool isBeautyNum(int k) {
    int s=0;
    FOR(i,1,k+1,1) {
        if (k%i==0) {
            s+=(k/i);
        }
    }
    return s%2==0;
}

void maxSubArrSum(int n, int arr[], int &start_index, int &finish_index) {
    int max_ending_here=0, max_so_far=0, start_index_temp=-1;
    FOR(i,0,n,1) {
        max_ending_here+=arr[i];
        if (max_ending_here<=0) {
            max_ending_here=0;
            start_index_temp=1;
        }
        else {
            if (start_index_temp=-1) start_index_temp=i;
            if (max_so_far < max_ending_here && isBeautyNum(start_index_temp)) {
                max_so_far = max_ending_here;
                start_index = start_index_temp;
                finish_index = i;
            }
        }
    }
    cout << max_so_far << endl;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int n,start_index, finish_index;
    cin >> n;
    int arr[n+1];
    FOR(i,0,n,1) cin >> arr[i];

    maxSubArrSum(n,arr,start_index,finish_index);

    return 0;
}
