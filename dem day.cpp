#include<bits/stdc++.h>
using namespace std;

long long mod=123456789;
int main(){
	int t;
	cin >>t;
	while(t--){
		long long n;
		cin >>n;
		long long k=n-1, a=2;
		long long kq=1;
		while(k){
			if(k%2==1){
				kq*=a;
				kq%=mod;
			}
			k/=2;
			a*=a;
			a%=mod;
		}
		cout << kq <<endl;
	}
	
}

