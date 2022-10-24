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
		int x[n];
		for(int i=0; i<n; i++){
			x[i]=i+1;
		}
		int kt=0;
		do{
			int check=0;
			for(int i=0; i<n; i++){
				if(a[i]!=x[i]){
					dem++;
					break;
				}else check++;
			}
			if(check==n) break;
		}while(next_permutation(x, x+n));
		cout <<dem <<endl;
	}
}


