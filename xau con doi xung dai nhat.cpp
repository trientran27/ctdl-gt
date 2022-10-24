#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		int n=s.size();
		int ans=1;
		//le
		for(int i=0; i<n; i++){
			int u=i, v=i;
			while(u>=0 && v<n){
				if(s[u]==s[v]){
					ans= max( ans, v-u+1);
					u--, v++;
				}else break;
			}
		}
		//chan
		for(int i=0; i<n; i++){
			int u=i, v=i+1;
			while(u>=0 && v<n){
				if(s[u]==s[v]){
					ans= max( ans, v-u+1);
					u--, v++;
				}else break;
			}
		}
		cout <<ans <<endl;
	}
}

