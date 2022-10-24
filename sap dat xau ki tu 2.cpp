#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int d;
		cin >>d;
		string s;
		cin >>s;
		int a[26]={0};
		for(char x:s){
			a[x-'A']++;
		}
		int k= *max_element(a, a+26);
		if(s.length()-k>=(k-1)*(d-1)){
			cout <<1;
		}else{
			cout <<-1;
		}
		cout <<endl;
	}
}

