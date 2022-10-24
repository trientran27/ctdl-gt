#include <bits/stdc++.h> 
using namespace std; 

int main (){ 
	int t; 
	cin>>t; 
	while(t--){ 
		long n,k; 
		cin>>n>>k; 
		int kq=1;
		while(k%2==0){
			k/=2;
			kq++;
		}
		cout <<kq <<endl;
	} 
}
