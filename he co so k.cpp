#include<bits/stdc++.h>
using namespace std;

void add(int k, string a, string b){
	string ans="";
	while(a.size()<b.size()) a="0"+a;
	while(b.size()<a.size()) b="0"+b;
	int nho=0;
	int n=a.size();
	for(int i=n-1; i>=0; i--){
		int so=(int(a[i]-'0')+ int(b[i]-'0') + nho);
		ans =char(so%k +'0') + ans;
		nho=so/k;
	}
	if(nho>0) ans=char(nho +'0') + ans;
	cout <<ans <<endl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int k;
		string a, b;
		cin >>k >>a >>b;
		add(k, a, b);
	}
}
