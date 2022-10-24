#include<bits/stdc++.h>
using namespace std;

int kq(int a[], int n){
	int dp[n+1]={0};
	int result=0;
	for(int i=1; i<=n; i++){
		dp[i]=1;
		for(int j=1; j<i; j++){
			if(a[j]<a[i]){
				dp[i]=max(dp[i], dp[j]+1);
			}
		}
		result=max(result, dp[i]);
	}
	return result;
}
int main(){
	int n;
	cin >>n;
	int a[n];
	for(int i=1; i<=n; i++){
		cin >>a[i];
	}
	cout <<kq(a, n);
}

