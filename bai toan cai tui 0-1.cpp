#include<bits/stdc++.h>
using namespace std;

int kq(int a[], int c[], int n, int v){
	int dp[n+1][n+1]={0};
	for(int i=1; i<=n; i++){
		dp[i][0]=0;
		dp[0][i]=0;
	}
	for(int i= 1; i<=n; i++){
		for(int j= 1; j<=v; j++){
			if(a[i]>j){//the tich toi da nho nhon the tich dang xet(khong chon duoc goi hang moi)
				dp[i][j] = dp[i-1][j];//bang gia tri goi hang truoc no(i-1) ma co the tich j da thoa man
			}else{
				dp[i][j]= max( dp[i-1][j], c[i]+ dp[i-1][j-a[i]]);
			}
		}
	}
	return dp[n][v];
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n, v;
		cin >>n >>v;
		int a[n+1], c[n+1];
		for(int i=1; i<=n; i++){
			cin >>a[i];//the tich
		}
		for(int i=1; i<=n; i++){
			cin >>c[i];//gia tri
		}
		cout <<kq(a, c, n, v) <<endl;
	}
}
//c[i]+dp[i-1][j-a[i]] : gia tri mon hang dang xet + gia tri mon hang co the tich con du la j-a[i]

