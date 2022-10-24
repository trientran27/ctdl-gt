#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];
void in_chan(int k){
	for(int i=1; i<=k; i++){
		cout <<a[i] <<" ";
	}
	for(int i=k; i>=1; i--){
		cout <<a[i] <<" ";
	}
	cout <<endl;
}
void in_le(int k, int j){
	for(int i=1; i<=k; i++){
		cout <<a[i] <<" ";
	}
	cout <<j <<" ";
	for(int i=k; i>=1; i--){
		cout <<a[i] <<" ";
	}
	cout <<endl;
}
void Try(int i, int k, int x){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==x && x%2==0) in_chan(k);
		else if(i==x && x%2!=0) in_le(k, k+1);
		else Try(i+1, k, x);
	}
}
int main(){
	cin >>n;
	int k=n/2;
	if(n%2==0) Try(1, k, k);
	else Try(1, k, k+1);
}

