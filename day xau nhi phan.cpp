#include<bits/stdc++.h>
using namespace std;

long long g[93];
long long kq(long long n, long long k){
	if(n==1) return 0;
	if(n==2) return 1;
	if(k <= g[n-2]) return kq(n-2, k);
	return kq(n-1, k-g[n-2]);
}
int main(){
	int t;
	cin >>t;
	g[1]=g[2]=1;
	for(long long i=3; i<=92; i++){
		g[i] = g[i-2]+ g[i-1];
	}
	for(long long i=1; i<=92; i++){
		cout <<g[i] <<" ";
	}
	while(t--){
		long long n, k;
		cin >>n >>k;
		cout <<kq(n, k) <<endl;
	}
}

