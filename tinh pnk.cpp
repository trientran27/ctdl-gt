#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;
int main(){
	int t;
	cin >>t;
	while(t--){
		long long n, k;
		cin >>n >>k;
		long long sum=1;
		for(long long i=n; i>=n-k+1; i--){
			sum*=i;
			sum%=mod;
		}
		cout <<sum <<endl;
	}
}
