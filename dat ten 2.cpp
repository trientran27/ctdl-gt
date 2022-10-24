#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[1005], x[1005];
int dem, kt;
void in(){
	for(int i=1; i<=k; i++){
		char c=a[i]+64;
		cout <<c;
	}
	cout <<endl;
}
void Try(int i){
	for(int j=a[i-1]+1; j<=n-k+i; j++){
		a[i]=j;
		if(i==k) in();
		else Try(i+1);
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>k;
		Try(1);
	}
}
