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
		sort(a,a+i+1);
		cout <<"Buoc " <<i <<": ";
		for(int j=0; j<=i; j++){
			cout <<a[j] <<" ";
		}
		cout <<endl;
	}
}
