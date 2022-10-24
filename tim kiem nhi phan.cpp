#include<bits/stdc++.h>
using namespace std;

void tk(int a[], int n, int k){
	int l=0, r=n-1, kt=0;
	while(l<=r){
		int m=(l+r)/2;
		if(k==a[m]){
			kt=1;
			cout <<m+1;
			break;
		}
		else if(k>a[m]){
			l=m+1;
		}else{
			r=m-1;
		}
	}
	if(kt==0){
		cout <<"NO";
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n, k;
		cin >>n >>k;
		int a[n];
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		if(k<a[0]) cout <<"NO";
		else{
			tk(a, n, k);
		}
		cout <<endl;
	}
}

