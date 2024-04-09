#include<iostream>
using namespace std;
bool check(int n){
	int sum = 0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n) {
        return 1;
	}
	else {
        return 0;
	}
}
int main(){
	int a,b;
	cin >> a >> b;
	if (0<a<b) {
        for (int i=a;i<b;i++){
            if (check(i)){
                cout << i << " ";
            }
        }
	}
	return 0;
}
