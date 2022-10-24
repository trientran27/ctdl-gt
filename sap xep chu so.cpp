#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n; 
		cin >>n;
		long long a[n], b[10];
		for(int i=0; i<n; i++){
			cin >>a[i];
			while(a[i]>0){
				int c=a[i]%10;
				b[c]=1;
				a[i]/=10;
			}
		}
		for(int i=0; i<10; i++){
			if(b[i]==1){
				cout <<i <<" ";
				b[i]=0;
			}
		}
		cout <<endl;
	}
}
	

