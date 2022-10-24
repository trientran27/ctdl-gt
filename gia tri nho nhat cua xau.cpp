#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		map<char,int> mp;
		long long k;
		cin >>k;
		string s;
		cin >>s;
		for(int i=0; i<s.size(); i++){
			mp[s[i]]++;
		}
		priority_queue<int> qe;
		for(auto it:mp){
			qe.push(it.second);
		}
		long long ans=0;
		while(k--){
			long long x=qe.top()-1;
			qe.pop();
			qe.push(x);
		}
		while(!qe.empty()){
			long long x=qe.top();
			qe.pop();
			ans+=x*x;
		}
		cout <<ans <<endl;
	}
}

