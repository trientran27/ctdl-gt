#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n, k;
		cin >>n >>k;
		int dem=1;
		while(k%2==0){
			k/=2;
			dem++;
		}
		cout <<char(dem+64) <<endl;
	}
}

