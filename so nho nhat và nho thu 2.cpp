#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		int dem=1;
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		sort(a, a+n);
		int i=1;
		for( i=1; i<n; i++){
			if(a[0] !=a[i]){
				dem=a[i];
				break;
			}
		}
		if(i==n) cout <<-1;
		else{
			cout <<a[0] <<" " <<dem;
		}
		cout <<endl;
	}
}

