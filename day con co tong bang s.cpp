#include<bits/stdc++.h>
using namespace std;
// y tuong tao cac bai toan con tu s toi s-a[1]
int checksum(int a[], int n, int s){
	int dp[s+1]={0};
	dp[0]=1;//danh dau phan tu a[i] thoa man
	for(int i=1; i<=n; i++){
		for(int j=s; j>=a[i]; j--){
			if(dp[j]==0 && dp[j-a[i]]==1){//danh dau cac bai toan con thoa man
				dp[j]=1;
			}
		}
	}
	return dp[s]==1;//khi dp[s]==1 duoc tinh tu cac bai toan con co tong s-a[i] thi return 1
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, s;
		cin >> n >> s;
		int a[n+1];
		for(int i=1; i<=n; i++){
			cin >>a[i];
		}
		if(checksum(a, n, s)){
			cout <<"YES";
		}else{
			cout <<"NO";
		}
		cout << endl;
	}
}

