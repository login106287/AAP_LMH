#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000000
#define SQ 10000
//code se duoc giai thich ben duoi
#define check(n) (prime[n>>6]&(1<<((n&63)>>1)))
#define set(n) prime[n>>6]|=(1<<((n&63)>>1))
ll prime[MAX>>6];
ll eratosthene(){
	for(ll i=3;i<=SQ;i+=2){
		if (!check(i)){
			ll tmp = 2*i;
			for(ll j=i*i;j<=MAX;j+=tmp){
				set(j);}
		}
	} return 0;
}
int main(){
	eratosthene();

	return 0;
}
