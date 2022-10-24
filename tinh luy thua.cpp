#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;

int main(){
	while(1){//lap vo han
		long long a, b;
		cin >>a >>b;
		if(a==0 && b==0) break;
		long long sum=1;
		while(b){
			if(b%2==1){
				sum*=a;//^1
				sum%=mod;
			}
			b/=2;
			a*=a;
			a%=mod;
		}
		cout <<sum <<endl;
	}
}
