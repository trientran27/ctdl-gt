#include<bits/stdc++.h>
using namespace std;

int n, a[100];
vector<vector<int>> v;

void in(int n){
	vector<int> tmp(a+1, a+n+1);
	v.push_back(tmp);
}
void Try(int i, int k, int sum){
	for(int j=k; j>=1; j--){
		if(sum+j<=n){
			a[i]=j;
			sum+=j;
			if(sum==n) in(i);
			else Try(i+1, j, sum);//xet tong nho hon
			sum-=j;
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n ;
		Try(1, n, 0);
		cout <<v.size() <<endl;
		for(vector<int> it:v){
			cout <<"(";
			for(int i=0; i<it.size()-1; i++){
				cout <<it[i] <<" ";
			}
			cout <<it[it.size()-1] <<") ";
		}
		v.clear();
		cout <<endl;
	}
}

