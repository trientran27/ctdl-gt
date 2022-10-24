#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int n){
	int dp[n+1]={0};
	dp[1]=a[1];
	int result=0;
	for(int i=1; i<=n; i++){
		dp[i]=a[i];
		for(int j=1; j<i; j++){
			if(a[j]<a[i]){
				dp[i]= max( dp[i], dp[j]+a[i]);
			}
		}
		result = max(result, dp[i]);
	}
	return result;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for(int i=1; i<=n; i++){
			cin >>a[i];
		}
		cout <<solve(a, n) << endl; 
	}
}
//y tuong giong bai day con tang dai nhat
//khac la khi gapj cau hinh thoa man thay vi cong len 1 ta cong no vs a[i]

