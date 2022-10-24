#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n, k;
		cin >>n >>k;
		int a[n];
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		int dem=-1;
		for(int i=0; i<n; i++){
			if(a[i]==k) dem=1;
		}
		cout <<dem;
		cout <<endl;
	}
}
	

