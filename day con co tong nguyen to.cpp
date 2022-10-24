#include<bits/stdc++.h>
using namespace std;

int n;
int x[20], a[20];
vector<vector<int>> v;
int nt(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void Try(int i, int sum, int pos){
	for(int j=pos; j<n; j++){
		x[i]=a[j];
		if(nt(sum+x[i])){
			vector<int> tmp(x , x+i+1);
			v.push_back(tmp);
		}
		Try(i+1, sum+x[i], j+1);
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
			for(int it:v[i]){
				cout <<it <<" ";
			}
			cout <<endl;
		}
		v.clear();
	}
}

