#include<bits/stdc++.h>
using namespace std;

int n, a[100];

void in(){
	int dem=1;
	for(int i=1; i<=n; i++){
		if(a[i]==1 && a[i+1]==1){
			dem=0;
			break;
		}
	}
	if(dem==1 && a[1]==1 && a[n]==0){
		for(int i=1; i<=n; i++){
			if(a[i]==1){
				cout <<"H";
			}else{
				cout <<"A";
			}
		}
		cout <<endl;
	}
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
	}
}

