#include <bits/stdc++.h>
using namespace std;

int counts(int n,int arr[],int temp) {
    int count=0;
    for (int i=0; i<n; i++) {
        if (arr[i]==arr[temp]) count ++;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SOMM.INP","r",stdin);
    freopen("SOMM.OUT","w",stdout);

    int n,maxx=0;
    cin >> n;
    int arr[n+1];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<n; i++) {
        int demi = counts(n,arr,i);
        maxx = max(demi,maxx);
    }
    cout << maxx;


    return 0;
}
