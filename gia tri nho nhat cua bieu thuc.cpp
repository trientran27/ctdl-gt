#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >>n;
		long long ans=0;
		long long a[n];
		long long b[n];
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		for(int i=0; i<n; i++){
			cin >>b[i];
		}
		sort(a, a+n);
		sort(b, b+n, greater<int>());
		for(int i=0; i<n; i++){
			ans+=a[i]*b[i];
		}
		cout <<ans <<endl;
	}
}

