#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int m, n;
		cin >>m >>n;
		int a[m], b[n];
		set <int> x;
		set <int> y;
		for(int i=0; i<m; i++){
			cin >>a[i];
			x.insert(a[i]);
			y.insert(a[i]);
		}
		for(int i=0; i<n; i++){
			cin >>b[i];
			x.insert(b[i]);
		}
		for(int z:x){
			cout <<z <<" ";
		}
		cout <<endl;
		for(int i=0; i<n; i++){
			if(y.count(b[i]) >=1 ){//tim kiem bi trong y
				cout <<b[i] <<" ";
			}
		}
		cout <<endl;
	}
}

