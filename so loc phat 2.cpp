#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		queue<string> qe;
		vector<string> v;
		int  n;
		cin >>n;
		qe.push("6");
		qe.push("8");
		while(!qe.empty()){
			string s=qe.front();
			v.push_back(s);
			qe.pop();
			if(s.size()<n){
				qe.push(s+"6");
				qe.push(s+"8");
			}
		}
		cout <<v.size() <<endl;
		for(int i=0; i<v.size(); i++){
			cout <<v[i] <<" ";
		}
		cout <<endl;
	}
}

