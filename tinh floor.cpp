#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		long long n, x;
		cin >>n>> x;
		long long a[n];
		for(long long i=0; i<n; i++){
			cin >>a[i];
		}
		if(x<a[0]) cout <<-1;
		else{
			auto k= upper_bound(a, a+n, x);
			cout <<k-a;
		}
		cout <<endl;
	}
}
