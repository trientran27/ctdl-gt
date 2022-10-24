#include<bits/stdc++.h>
using namespace std;

int check(int a[10], int n){
	for(int i=0; i<n; i++){
		if( (i>0 && i<n-1) && (a[i]==1 || a[i]==5)){
			if( a[i-1] ==1 || a[i-1] ==5 || a[i+1] ==1 || a[i+1] ==5){
				return 1;
			}else return 0;
		}
	}
	return 1;
}
int main(){
	char c;
	cin >>c;
	int n=c-64;;
	int a[10];
	for(int i=0; i<n; i++){
		a[i]=i+1;
	}
	do{
		if(check(a,n)){
			for(int i=0; i<n; i++){
	    		cout <<(char)(a[i]+64);
			}
			cout <<endl;;
		}
	}while(next_permutation(a,a+n));//hoan vi tiep theo
}

