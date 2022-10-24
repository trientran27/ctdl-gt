#include<bits/stdc++.h>
using namespace std;

void next(string s){
	int i=s.length();
	while(i--){//duyet toi phan tu bang 1 dau tien
		if(s[i]=='1'){
			s[i]='0';
			break;
		}else{
			s[i]='1';// th db 00000--->11111 va cac phan tu sau s[i] o truong hop tren=0 doi thanh 1
		}
	}
	cout <<s <<endl;;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		next(s);
	}
}

