#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n+1];
		long long sum=0;
		for(int i=1; i<=n; i++){
			cin >>a[i];
			sum+=a[i];
		}
		if(sum%2==0){
			cout <<"YES";
		}else{
			cout <<"NO";
		}
		cout <<endl;
	}
}

