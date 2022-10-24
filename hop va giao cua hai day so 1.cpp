#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n, m;
		cin >>n >>m;
		set<int> x, y;
		int a[n+5], b[m+5];
		for(int i=0; i<n; i++){
			cin >>a[i];
			x.insert(a[i]);
			y.insert(a[i]);
		}
		for(int i=0; i<m; i++){
			cin >>b[i];
			x.insert(b[i]);
		}
		for(auto it:x){
			cout <<it <<" ";
		}
		cout <<endl;
		for(int i=0; i<m; i++){
			if(y.count(b[i]) >=1){
				cout << b[i]<<" ";
			}
		}
		cout <<endl;
	}
}
