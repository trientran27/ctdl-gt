#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	int dp[n+1][n+1];
	memset(dp, 0, sizeof(dp));
	cin.ignore();
	for(int i=1; i<=n; i++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss >>tmp){
			int k=0;
			for(int j=0; j<tmp.size(); j++){
				k= k*10 + tmp[j]-48;
			}
			dp[i][k]=1;
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout <<dp[i][j] <<" ";
		}
		cout <<endl;
	}
}

