#include<bits/stdc++.h>
using namespace std;

long long g[93];
long long kq(long long n, long long k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=g[n-2]) return kq(n-2, k);
	return kq(n-1, k-g[n-2]);
}
int main(){
	g[1]=g[2]=1;
	for(int i=3; i<=92; i++){
		g[i]=g[i-2]+g[i-1];
	}
	int t;
	cin >>t;
	while(t--){
		long long n, k;
		cin >>n >>k;
		cout <<(char)kq(n,k) <<endl;
	}
}
