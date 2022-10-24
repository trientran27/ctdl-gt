#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >>a[i];
	}
	for(int i=0; i<n; i++){
		int k=-1;
		for(int j=0; j<n-1; j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
				k=1;
			}
		}
		if(k==1){
			cout <<"Buoc " <<i+1 <<": ";
			for(int j=0; j<n; j++){
				cout <<a[j] <<" ";
			}
			cout <<endl;
		}else break;
	}
}
