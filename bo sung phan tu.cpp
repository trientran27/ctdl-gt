#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		int dem=0;
		sort(a, a+n);
		for(int i=0; i<n; i++){
			if(a[i]<a[i+1]){
				dem+=a[i+1]-a[i]-1;
			}
		}
		cout <<dem <<endl;
	}
}
