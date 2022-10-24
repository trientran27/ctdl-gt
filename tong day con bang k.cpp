#include<bits/stdc++.h>
using namespace std;

int n, k, cnt=0;
int a[100], check[100];
void in(){
	cnt++;
	for(int i=1; i<=n; i++){
		if(check[i]==1){
			cout <<a[i] <<" ";
		}
	}
	cout <<endl;
}
void Try(int sum, int i){
	if(sum>k) return;
	for(int j=n; j>=i; j--){
		sum+=a[j];
		check[j]=1;
		if(sum==k) in();
		else Try(sum, j+1);
		sum-=a[j];
		check[j]=0;
	}
}
int main(){
	cin >>n >>k;
	for(int i=1; i<=n; i++){
		cin >>a[i];
		check[i]=0;
	}
	sort(a+1, a+n+1);
	Try(0,1);
	cout <<cnt;
}

