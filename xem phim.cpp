#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int c, int n ){
	int dp[n+1][c+1];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=c; j++){
			if(a[i]>j){
				dp[i][j]=dp[i-1][j];//neu khoi luong a[i] lon hon khoi luong cho phep
			}else{
				dp[i][j]= max(dp[i-1][j], a[i]+dp[i-1][j-a[i]]);
			}
		}
	}
	return dp[n][c];
}
int main(){
	int c, n;
	cin >>c >>n;
	int a[n+1];
	for(int i=1; i<=n; i++){
		cin >>a[i];
	}
	cout <<solve(a, c, n);
}
//tuong tu bai toan cai tui
