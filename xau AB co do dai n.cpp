#include<bits/stdc++.h>
using namespace std;

int n, a[100];

void in(){
	for(int i=1; i<=n; i++){
		if(a[i]==1){
			cout <<"B";
		}else{
			cout <<"A";
		}
	}
	cout <<" ";
}
void sinh(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n){
			in();
		}else{
			sinh(i+1);
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		sinh(1);
		cout <<endl;
	}
}

