#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];
void in(){
	for(int i=1; i<=n; i++){
		int x= a[i]^a[i-1];
		cout <<x;
	}
	cout <<" ";
}
void Try(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n){
			in();
		}else Try(i+1);
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		Try(1);
		cout <<endl;
	}
}

