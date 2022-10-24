#include<bits/stdc++.h>
using namespace std;
//y tuong giong bai dai con tang dai nhat, tim day con tang dai nhat roi tru di

void kq(int a[], int dp[], int n){
	int result=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			if(a[j]<=a[i]){
				dp[i]= max(dp[i], dp[j]+1);
			}
		}
		result=max(result, dp[i]);
	}
	cout << n-result <<endl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n+1];
		int dp[n+1];
		for(int i=1; i<=n; i++){
			cin >>a[i];
			dp[i]=1;//phan tu dp[i] duoc coi day 1
		}
		kq(a, dp, n);
	}
}

