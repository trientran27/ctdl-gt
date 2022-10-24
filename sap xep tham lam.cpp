#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n+5];
		int b[n+5];
		for(int i=0; i<n; i++){
			cin >>a[i];
			b[i]=a[i];
		}
		sort(b, b+n);
		int check=1;
		for(int i=0; i<n; i++){
			if(a[i]!=b[i] && a[i]!=b[n-i-1]){
				cout <<"No" <<endl;
				check=0;
				break;
			}
		}
		if(check==1) cout <<"Yes" <<endl;
	}
}

