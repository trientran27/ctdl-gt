#include<bits/stdc++.h>
using namespace std;

int solve(string s1, string s2){
	int dp[s1.length() +1][ s2.length() +1];
	for(int i=0; i<= s1.length(); i++){
		dp[i][0]=0;
	}
	for(int i=0; i<= s2.length(); i++){
		dp[0][i]=0;
	}
	int result=0;
	for(int i=1; i<=s1.length(); i++){
		for(int j=1; j<=s2.length(); j++){
			if( s1[i-1]== s2[j-1]){
				dp[i][j]= dp[i-1][j-1]+1;//neu giong thi bang o cheo truoc cong 1
			}else{
				dp[i][j]= max(dp[i][j-1], dp[i-1][j]);
			}//neu khong bang max cua o tren hoac ben trai no
			result= max(result, dp[i][j]);
		}
	}
	return result;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		string s1, s2;
		cin >>s1 >>s2;
		cout <<solve(s1, s2) <<endl;
	}
}
//ban chat la bai xau con chung dai nhat

