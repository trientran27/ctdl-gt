#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[1000];
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		int k=0;
		long long min=a[0]+a[n-1];
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				k=a[i]+a[j];
				if(abs(k)<abs(min)) min=k;
			}	
		}
		cout << min <<"\n";
	}
}

