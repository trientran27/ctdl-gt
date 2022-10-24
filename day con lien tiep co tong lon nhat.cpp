#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n+1], dp[1001];
		for(int i=1; i<=n; i++){
			cin >>a[i];
		}
		a[0]=dp[0]=0;
		int Max=INT_MIN;
		for(int i=1; i<=n; i++){
			dp[i]=max(dp[i-1]+a[i], a[i-1]+a[i]);
			Max=max(dp[i], Max);
		}
		cout <<Max <<endl;
	}
}

