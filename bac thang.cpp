#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n, k;
		cin >>n >>k;
		int b[n+1]={0};
		b[0]=1, b[1]=1;//b[0]=1 de khi j=min(i,k) se co 1 cach chay thang tu j toi min
		for(int i=2; i<=n; i++){
			for(int j=1; j<=min(i, k); j++){//khi i,k thi so buoc toi da la i buoc, khi i>=k thi so buoc toi da la k buoc
				b[i]+=b[i-j];//bac i bang tong cac cach tu bac i-1 toi bac i-k
				b[i]%=mod;
			}
		}
		cout <<b[n] <<endl;
	}
}

