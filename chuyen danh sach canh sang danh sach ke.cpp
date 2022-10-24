#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int d, c;
		cin >>d >>c;
		int u, v;
		vector<int> ke[c+1];
		for(int i=1; i<=c; i++){
			cin >>u >>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		for(int i=1; i<=d; i++){
			cout <<i <<": ";
			for(int x:ke[i]){
				cout <<x <<" ";
			}
			cout <<endl;
		}
	}
}

