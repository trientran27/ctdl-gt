#include<bits/stdc++.h>
using namespace std;

int n, k, mod=1e9+7;

void mul(long long a[20][20], long long tmp[20][20]){
	long long res[20][20];
	for(int i=0; i<n; i++){//nhan ma tran(tinh mu)
		for(int j=0; j<n; j++){
			res[i][j]=0;//gan gia tri
			for(int q=0; q<n; q++){
				res[i][j]+=a[i][q]*tmp[q][j] %mod;
				res[i][j]%=mod;
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			a[i][j]=res[i][j];//gan gia tri ms cho mang a
		}
	}
}
void process(long long a[20][20]){
	long long ans[20][20];
	for(int i=0; i<n; i++){//tao ma tran don vi
		for(int j=0; j<n; j++){
			if(i==j){
				ans[i][j]=1;
			}else{
				ans[i][j]=0;
			}
		}
	}
	while(k){//tinh luy thua
		if(k%2==1){// neu so mu le thi x^(k/2) *x^(k/2) *x
			mul(ans, a);//a^1
		}
		mul(a,a);//a^2
		k/=2;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout <<ans[i][j] <<" ";
		}
		cout <<endl;
	}
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
	}
}

