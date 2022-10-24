#include<bits/stdc++.h>
using namespace std;

int n, k, mod=1e9+7;

void mu(long long a[20][20], long long tmp[20][20]){
	long long res[20][20];
	for(int i=0; i<n; i++){
	 	for(int j=0; j<n; j++){
	 		res[i][j]=0;
	 		for(int l=0; l<n; l++){
	 			res[i][j]+= a[i][l]*tmp[l][j]%mod;
	 			res[i][j]%=mod;
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			a[i][j]=res[i][j];
		}
	}
}
void process(long long a[20][20]){
	long long ans[20][20];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				ans[i][j]=1;
			}else{
				ans[i][j]=0;
			}
		}
	}
	while(k){
		if(k%2==1){
			mu(ans, a);
		}
		k/=2;
		mu(a, a);
	}
	long long sum=0;
	for(int i=0; i<n; i++){
		sum+=ans[i][n-1]%mod;
		sum%=mod;
	}
	cout <<sum;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>k;
		long long a[20][20];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >>a[i][j];
			}
		}
		process(a);
		cout <<endl;
	}
}

