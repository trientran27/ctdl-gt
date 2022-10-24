#include<bits/stdc++.h>
using namespace std;

int n;
int a[20], x[20];
vector<vector<int>> v;

void Try(int i, int sum, int pos){
	for(int j=pos; j<n; j++){
		x[i]=a[j];
		if( (sum+ x[i])%2==1 ){
			vector<int> tmp(x, x+i+1);
			v.push_back(tmp);
		}
		Try(i+1, sum+ x[i], j+1);
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		sort(a, a+n, greater<int>());
		Try(0, 0, 0);
		sort(v.begin(), v.end());
		for(int i=0; i<v.size(); i++){
			for(int it : v[i] ){
				cout <<it <<" ";
			}
			cout <<endl;
		}
		v.clear();
	}
}

