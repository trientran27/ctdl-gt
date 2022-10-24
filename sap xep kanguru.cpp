#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		sort(a, a+n);
		int ans=n;
		for(int i=n-1, j=n/2-1; i>=n/2 && j>=0;){
			if(a[i]>= 2*a[j]){
				ans--;//bot di 1 con
				i--, j--;
			}else j--;//neu k thoa man thi xet con be hon
		}
		cout <<ans <<endl;
	}
}

