#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int m, n;
		cin >>m >>n;
		int p[m], q[n];
		for(int i=0; i<m; i++){
			cin >>p[i];
		}
		for(int i=0; i<n; i++){
			cin >>q[i];
		}
		int ans[m+n]={0};
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				ans[i+j] += p[i]*q[j];
			}
		}
		for(int i=0; i<m+n-1; i++){
			cout <<ans[i] <<" ";
		}
		cout <<endl;
	}
}

