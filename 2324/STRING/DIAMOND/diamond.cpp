#include <bits/stdc++.h>
using namespace std;

void solve(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++) cout << " ";
		for(int j=1;j<=2*i-1;j++) cout << "*";
		cout << endl;
	}
	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=n-i;j++) cout << " ";
		for(int j=1;j<=2*i-1;j++) cout << "*";
		cout << endl;
	}
	cout << endl;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;

	while(cin>>n) solve(n);

	return 0;
}
