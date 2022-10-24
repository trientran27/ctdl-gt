#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n, s, m;
		cin >>n >>s >>m;
		if(m>n || (s>=7 && n*6 < m*7)){
			cout <<"-1";
		}else{
			int dem=0;
			while(n*dem<s*m){
				dem++;
			}
			cout <<dem;
		}
		cout <<endl;
	}
}
