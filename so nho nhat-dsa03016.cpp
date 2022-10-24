#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int s, d;
		cin >>s >>d;
		if(9*d<s){
			cout <<-1 <<endl;
			continue;
		}
		char a[1000];
		a[0]='1';
		s-=1;
		for(int i=1; i<d; i++){
			a[i]='0';
		}
		for(int i=d-1; i>=0; i--){
			if(s>=9){
				a[i]='9';
				s-=9;
			}else if(s>0 && s<9){
				if(i==0) a[i]='1'+s;
				else a[i]= '0'+s;
				s=0;
			}else if(s==0) break;
		}
		for(int i=0; i<d; i++){
			cout <<a[i];
		}
		cout <<endl;
	}
}

