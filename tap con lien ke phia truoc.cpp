#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[1005];

void next(){
	int i=k;
	for( i; i>0; i--){
		if(a[i]-a[i-1]>1){
			break;
		}
	}
	if(i==0 ){
		for(int j=n-k+1; j<=n; j++){
			cout <<j <<" ";
		}
	}else{
		a[i]--;
		for(int j=i+1; j<=k; j++){
			a[j]=n-k+j;
		}
		for(int j=1; j<=k; j++){
			 cout <<a[j] <<" ";
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>k;                                                                                               
		for(int i=1; i<=k; i++){
			cin >>a[i];
		}
		next();
		cout <<endl;
	}
}


