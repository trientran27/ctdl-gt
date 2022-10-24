#include<bits/stdc++.h>
using namespace std;

int n, k, s;
int a[100];
int dem=0;
void Try(int n, int k, int s, int i){
	for(int j=a[i-1]+1; j<=n-k+i; j++){
		a[i]=j;
		if(i==k){
			int tong=0;
			for(int l=1; l<=k; l++){
				tong+=a[l];
			}
			if(tong==s) dem++;
		}else{
			Try(n, k, s, i+1);
		}
	}
}
int main(){
	while(1){
		cin >>n >>k >>s;
		if(n==0 && k==0 && s==0) break;
		dem=0;
		Try(n, k, s, 1);
		cout <<dem <<endl;
	}
}

