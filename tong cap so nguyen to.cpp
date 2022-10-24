#include<bits/stdc++.h>
using namespace std;
 
int nt(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int k=-1;
		for(int i=2; i<=sqrt(n); i++){\
			if(nt(i) && nt(n-i)){
				cout <<i <<" " <<n-i;
				k=1;
				break;
			}
		}
		if(k==-1) cout <<k;
		cout <<endl;
	}
}
