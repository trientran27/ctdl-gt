#include<bits/stdc++.h>
using namespace std;

int n, ok;
int a[100][100];
char x[100];
void in(int k){
	for(int i=0; i<k; i++){
		cout <<x[i];
	}
	cout <<" ";
}
void Try(int i, int j, int k){
	if(i==n-1 && j==n-1){
		ok=1;
		in(k);
		return;
	}
	if(a[i][j]==1 && a[i+1][j]==1){
		x[k]='D';
		Try(i+1, j, k+1);
	}
	if(a[i][j]==1 && a[i][j+1]==1){
		x[k]='R';
		Try(i, j+1, k+1);
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >>a[i][j];
			}
		}
		ok=0;
		if(a[0][0]==0 || a[n-1][n-1]==0){
			cout <<-1 <<endl;
			continue;
		}
		Try(0, 0, 0);
		if(ok==0) cout <<-1;
		cout <<endl;
	}
}
