#include<bits/stdc++.h>
using namespace std;

int a, b, c;
int solve(string s1, string s2, string s3){
	int dp[105][105][105]={0};
	int result=0;
	for(int i=1; i<=a; i++){
		for(int j=1; j<=b; j++){
			for(int l=1; l<=c; l++){
				if( s1[i-1]== s2[j-1] && s2[j-1]==s3[l-1]){
					dp[i][j][l]= dp[i-1][j-1][l-1]+1;
				}else{
					dp[i][j][l]= max(dp[i-1][j][l], max( dp[i][j-1][l], dp[i][j][l-1]));
				}
				result= max(result, dp[i][j][l]);
			}
		}
	}
	return result;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>a >>b >>c;
		string s1, s2, s3;
		cin >>s1 >>s2 >>s3;
		cout <<solve(s1, s2, s3) <<endl;
	}
}
//ban chat la bai xau con chung dai nhat
