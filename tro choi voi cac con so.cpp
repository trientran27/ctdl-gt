
#include<bits/stdc++.h>
using namespace std;

int check(int a[10], int n){
	for(int i=0; i<n; i++){
		if( abs(a[i+1]-a[i]) ==1 ){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for(int i=0; i<n; i++){
			a[i]=i+1;
		}
	    do{
	    	if(check(a, n)){
	    		for(int i=0; i<n; i++){
		    		cout <<a[i];
				}
				cout <<endl;
			}
	    	
		}while(next_permutation(a,a+n));//hoan vi tiep theo
		cout <<endl;
	}
}

