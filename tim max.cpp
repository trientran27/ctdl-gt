#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;

int main(){
	int t;
	cin >>t;
	while(t--){
		long long n;
		cin >>n;
		long long a[n];
		for(long long i=0; i<n; i++){
			cin >>a[i];
		}
		sort(a, a+n);
		long long max=0;
		for(long long i=0; i<n; i++){
			max+=a[i]*i;
		}
		cout <<max % mod <<endl;
	}
}

