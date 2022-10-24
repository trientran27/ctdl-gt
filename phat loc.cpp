#include<bits/stdc++.h>
using namespace std;

int n;
int a[1005];
void in(){
	int check1=0, check2=0;
	for(int i=1; i<=n-1; i++){
		if(a[i]==1 && a[i+1]==1){
			check1=1;
			break;
		}
	}
	for(int i=1; i<=n-3; i++){
		if(a[i]==0 && a[i+1]==0 && a[i+2]==0 && a[i+3]==0){
			check2=1;
			break;
		}
	}
	if(check1==0 && check2==0 && a[1]==1 && a[n]==0){
		for(int i=1; i<=n; i++){
			if(a[i]==1) cout <<8;
			else cout <<6;
		}
		cout <<endl;
	}
}
void Try(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n) in();
		else Try(i+1);
	}
}
int main(){
	cin >>n;
	Try(1);
}

