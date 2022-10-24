#include<bits/stdc++.h>
using namespace std;

long long a[10000];
int n;
void solve(){
	int dem=1;
	for(int i=0; i<=10000; i++){
		a[dem]=a[i]*10;
		if((a[dem])%n==0){
			cout<<a[dem];
			break;
		}
		dem++;
		a[dem]=a[dem-1]+9;
		if((a[dem])%n==0){
			cout<<a[dem];
			break;
		}
		dem++;                
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		a[0]=9;
		if(a[0]%n==0) cout <<a[0];
		else{
			solve();
			cout <<endl;
		}
	}
}

