#include<bits/stdc++.h>
using namespace std;

int n;
char a[20];
string s;
vector<vector<char>> v;

void Try(int i, int pos){
	for(int j=pos; j<n; j++){
		a[i]=s[j];
		vector<char> tmp(a+1, a+i+1);
		v.push_back(tmp);
		Try(i+1, j+1);
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>s;
		Try(1, 0);
		sort(v.begin(), v.end());
		for(int i=0; i<v.size(); i++){
			for(char it:v[i]){
				cout <<it;
			}
			cout <<" ";
		}
		v.clear();
		cout <<endl;
	}
}
