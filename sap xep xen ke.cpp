#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000];
void sr (){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]<=a[j]){
				swap(a[i], a[j]);
			}
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		sr();
		for(int i=0; i<n/2; i++){
			cout <<a[i] <<" " <<a[n-i-1] <<" ";
		}
		if(n%2==1){
			cout <<a[n/2];	
		}
		cout <<endl;
	}
}
