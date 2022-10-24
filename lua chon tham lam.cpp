#include<bits/stdc++.h>
using namespace std;

void Min(int n, int s){
	char a[100];
	a[0]='1';
	s-=1;
	for(int i=1; i<n; i++){
		a[i]='0';
	}
	for(int i=n-1; i>=0; i--){
		if(s >= 9) {
			a[i]='9';
			s-=9;
		}else if( s >0 && s<9){
			if(i==0) a[i]='1'+s;
			else a[i]='0'+s;
			s=0;
		}else if( s == 0 ) break;
	}
	for(int i=0; i<n; i++) cout <<a[i];
}
void Max(int n, int s){
	char a[100];
	for(int i=0; i<n; i++){
		a[i]='0';
	}
	for(int i=0; i<n; i++){
		if(s >= 9){
			a[i]='9';
			s-=9;
		}else if( s >0 && s<9){
			a[i]='0'+s;
			s=0;
		}else if( s == 0 ) break;
	}
	for(int i=0; i<n; i++) cout <<a[i];
}
int main(){
	int n, s;
	cin >>n >>s;
	if(s==0 && n==1){
		cout <<0 <<" " <<0;
	}if(9*n<s || (s==0 && n>1)){
		cout <<-1 <<" " <<-1;
	}else{
		Min(n, s);
		cout <<" ";
		Max(n, s);
	}
}

