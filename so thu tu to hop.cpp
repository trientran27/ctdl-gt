#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[1005], x[1005];
int dem, kt;
void in(){
	if(kt==0){
		int check=0;
		for(int i=1; i<=k; i++){
			if(a[i]!=x[i]){
				dem++;
				break;
			}else check++;
		}
		if(check==k) kt=1;
	}
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
		for(int i=1; i<=k; i++){
			cin >>x[i];
		}
		dem=1, kt=0;
		Try(1);
		cout <<dem <<endl;
	}
}
