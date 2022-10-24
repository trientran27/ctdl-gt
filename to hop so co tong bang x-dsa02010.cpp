#include<bits/stdc++.h>
using namespace std;

int n, s, a[100], x[100];
vector<vector<int>> v;

void Try(int i, int k, int sum){
	if(sum==s){
		vector<int> tmp(x, x+i);
		v.push_back(tmp);
		return;
	}
	for(int j=k; j<n; j++){
		if(sum+a[j]<=s){
			x[i]=a[j];
			Try(i+1, j, sum+a[j]);
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>s;
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		sort(a, a+n);
		Try(0, 0, 0);
		if(v.size()!=0){
			for(vector<int> it:v){
				cout <<"[";
				for(int i=0; i<it.size()-1; i++){
					cout <<it[i] <<" ";
				}
				cout <<it[it.size()-1] <<"]";
			}
		}else{
			cout <<-1;
		}
		v.clear();
		cout <<endl;
	}
}
//ban chat cx la bai toan hoan vi
//chu y bai nay nen xet i tu 0

