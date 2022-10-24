#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;
int main(){
	int t;
	cin >>t;
	while(t--){
		int n, k;
		cin >>n >>k;
		int dp[n+1]={0};
		dp[0] = dp[1] = 1;//gan gia tri de khi bat dau tu bac 0 hoac 1 toi k co 1 cach
		for(int i=2; i<=n; i++){
			for(int j=1; j<= min(i, k); j++){//khi i<k thi so buoc toi da la i buoc, khi i>=k thi so buoc toi da la k buoc
				dp[i] += dp[i-j];//bac i bang tong cac cach tu bac i-1 toi bac i-k
				dp[i]%=mod;
			}
		}
		cout <<dp[n] <<endl;
	}
}

