#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;
long long lt(long long n, long long k){
	if(k==0) return 1;
	long long x=lt(n, k/2);
	if(k%2==1) return (x*x%mod)*n%mod;
	else return x*x%mod;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		string p="";
		for(int i=s.size()-1; i>=0; i--){
			p+=s[i];
		}
		long long n=stoll(s.c_str());
		long long k=stoll(p.c_str());
		lt(n, k);
		cout <<lt(n, k)<<endl;
	}
}

