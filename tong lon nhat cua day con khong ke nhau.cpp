#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n+5], dp[n+5]={0};
		for(int i=1; i<=n; i++){
			cin >>a[i];
		}
		dp[1] = a[1];
		dp[2] = max(a[1], a[2]);//max cua 1 trong 2 nha canh nhau
		for(int i=3; i<=n; i++){
			dp[i]= max( dp[i-2]+ a[i], dp[i-1]);// bang tong khong ke cua no vs truoc khong ke no/hoac bang tong truoc no
		}
		cout <<dp[n] <<endl;
	}
}

