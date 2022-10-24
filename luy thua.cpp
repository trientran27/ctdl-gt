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
		while(k){
			if(k%2==1){
				sum *=n; //^1
				sum%=mod;
			}
			k/=2;
			n*=n;
			n%=mod;
		}
		cout <<sum <<endl;
	}            
}
