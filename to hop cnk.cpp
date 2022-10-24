#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;

int main(){
	int dp[1001][1001];
	for(int i=0; i<=1000; i++){
		for(int j=0; j<=i; j++){
			if(j==0 || j==i){
				dp[i][j]=1;//c(0,n) hoac c(n,n)=1
			}else{
				dp[i][j]=(dp[i-1][j] +dp[i-1][j-1]) % mod;
			}
		}
	}
	int t;
	cin >>t;
	while(t--){
		int n, k;
		cin >>n >>k;
		cout <<dp[n][k] <<endl;
	}
}
// ap dung cong thuc pascal c(n,k)=c(n-1,k)+ c(n-1, k-1)

